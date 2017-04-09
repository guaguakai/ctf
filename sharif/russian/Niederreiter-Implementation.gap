# Load the coding theory package of GAP, called GUAVA.
LoadPackage("GUAVA");;



#################################################################################
#               _____            _____                                          #
#              / ____|          |  __ \                                         #
#             | |  __  ___ _ __ | |__) |_ _ _ __ __ _ _ __ ___                  #
#             | | |_ |/ _ \ '_ \|  ___/ _` | '__/ _` | '_ ` _ \                 #
#             | |__| |  __/ | | | |  | (_| | | | (_| | | | | | |                #
#              \_____|\___|_| |_|_|   \__,_|_|  \__,_|_| |_| |_|                #
#                                                                               #
#################################################################################
# This function generates Niederreiter's parameters.
# Input:
#	1) q: Order of the underlying finite field of GRS
#	2) k: Non-inclusive upper bound on the degree of GRS polynomials
#	3) n: Number of distinct elements of the underlying finite field
# Output:
#	1) GRS: GRS code
#	2) M: A k*n matrix over GF(q), generated by multiplying the following matrices:
#		- a k*k random invertible matrix over GF(q)
#		- the generator matrix of GRS
#	3) RightInvM: A right inverse of M. 
#		Caveat: We used a simple formula which computes the pseudoinverse of M
#		(as opposed to a right inverse). This formula always leads to an answer
#		over real numbers, but may have no answer over GF(q). Care must be taken
#		to chose suitable parameters so as M*M^T is nonsingular over GF(q).
#################################################################################
GenParam := function(q, k, n)
	local F, poly_ring, perm, alpha, GRS, H, G, M, RightInvM;;

	F := GF(q);;
	
	poly_ring := PolynomialRing(F, ["t"]);;
	
	perm := Shuffle([0..n-1]);;
	# alpha consists of n distinct elements of GF(q).
	# Here, Z(q) denotes the lexicographically "smallest" primitive root of the multiplicative group of GF(q).
	alpha := List([1..n], i->perm[i]*Z(q));;
	
	# GRS is an unweighted GRS code, generated by vector "alpha" and
	# the polynomial ring "poly_ring" with degree 0 to k-1.
	GRS := GeneralizedReedSolomonCode(alpha, k, poly_ring);;
	
	H := RandomInvertibleMat(k, F);;
	G := GRS!.GeneratorMat;;
	M := H*G;;
	RightInvM := TransposedMat(M)*Inverse(M*TransposedMat(M));;
	
	return [GRS, M, RightInvM];;
end;;



###############################################################################################################
#  ______                     _       _____ _        _                       __      __       _               #
# |  ____|                   | |     / ____| |      (_)               /\     \ \    / /      | |              #
# | |__   _ __   ___ ___   __| | ___| (___ | |_ _ __ _ _ __   __ _   /  \   __\ \  / /__  ___| |_ ___  _ __   #
# |  __| | '_ \ / __/ _ \ / _` |/ _ \\___ \| __| '__| | '_ \ / _` | / /\ \ / __\ \/ / _ \/ __| __/ _ \| '__|  #
# | |____| | | | (_| (_) | (_| |  __/____) | |_| |  | | | | | (_| |/ ____ \\__ \\  /  __/ (__| || (_) | |     #
# |______|_| |_|\___\___/ \__,_|\___|_____/ \__|_|  |_|_| |_|\__, /_/    \_\___/ \/ \___|\___|\__\___/|_|     #
#                                                             __/ |                                           #
#                                                            |___/                                            #
###############################################################################################################
# This function receives an ASCII string (the message), 
# and encodes it as a vector over GF(q), possibly padding the
# vector with random elements of GF(q), so as the vector has k
# elements.
# For instance, assume that q is 101, k is 10, and the message 
# is "Hello". The following steps will be taken:
# 	1) Using ASCII encoding, the message is converted to a hex: 
# 		* "Hello" -> 0x48656C6C6F.
#	2) The resulting number is represented in base q. Each "digit"
# 	   of base q becomes an element of a vector:
# 		* 0x48656C6C6F -> [29, 59, 6, 57, 82, 42].
#		That is, 0x48656C6C6F = 42 + 82*q + 57*q^2 + 6*q^3 + 59*q^4 + 29*q^5.
#	3) The vector is left-padded with random elements of GF(q), until it has
#	   k elements:
# 		* [29, 59, 6, 57, 82, 42] -> [80, 82, 292, 122, 29, 59, 6, 57, 82, 42].
# Input:
# 	1) msg: An ASCII string (the message)
#	2) k: Length of the output vector
#	3) q: Order of the underlying finite field
# Output:
# 	1) L: Number of "digits" in base-q representation of msg before padding.
#	2) V: Encoding of msg as a padded vector of length k over GF(q).
# Caveat: L >= k, or an exception will happen.
###############################################################################################################
EncodeStringAsVector := function(msg, k, q)
	local V, len, s, i, msg_num, L;;

	# Create a random vector V of length k over GF(q)
	V := ShallowCopy(RandomMat(1, k, GF(q))[1]);;

	# Convert msg to a hex vector
	len := Length(msg);;
	s := [1..len];;
	for i in [1..len] do
		s[i] := HexStringInt(IntChar(msg[i]));;
	od;;
	
	# Convert the hex vector to a hex string
	s := JoinStringsWithSeparator(s,"");;

	# Convert hex string to a number
	msg_num := IntHexString(s);;

	# Convert msg_num to a vector over GF(q), 
	# and fill in the appropriate positions of V.
	i := k;;
	while msg_num > 0 do
		V[i] := msg_num mod q;;
		msg_num := QuoInt(msg_num, q);;
		i := i-1;;
	od;;

	# Length of unpadded msg
	L := k-i;;

	return [L, V];;
end;;

##################################################################################
#                  ______                             _                          #
#                 |  ____|                           | |                         #
#                 | |__   _ __   ___ _ __ _   _ _ __ | |_                        #
#                 |  __| | '_ \ / __| '__| | | | '_ \| __|                       #
#                 | |____| | | | (__| |  | |_| | |_) | |_                        #
#                 |______|_| |_|\___|_|   \__, | .__/ \__|                       #
#                                          __/ | |                               #
#                                         |___/|_|                               #
#                                                                                #
##################################################################################
# This function encrypts the input message using Niederreiter's encryption scheme.
# Input:
# 	1) msg: Plaintext, which is an ASCII string.
# 	2) q: Order of the underlying finite field.
# 	3) k: Plaintext will be encoded as a vector of length k over GF(q).
# 	4) n: Ciphertext will be encoded as a vector of length n over GF(q).
# 	5) M: A k*n matrix over GF(q), generated by GenParam().
# Output:
#	1) L: Length of encoded message, prior to random padding.
#	2) ctxt: Ciphertext, encoded as a vector of length n over GF(q).
##################################################################################
Encrypt := function(msg, q, k, n, M)
	local encoded_msg, L, m, t, ctxt, pos, i;;

	encoded_msg := EncodeStringAsVector(msg, k, q);;
	L := encoded_msg[1];;
	m := encoded_msg[2];;

	# t = (n-k)/2, which is the maximum number of errors GRS can correct
	t := QuoInt(n-k, 2);;

	# Multiplying by M and adding random error e with Hamming weight t
	ctxt := ShallowCopy(m*M);;
	pos := Shuffle([1..n]);;
	for i in [1..t] do
		ctxt[pos[i]] := Random(GF(q));;
	od;;

	return [L, ctxt];;
end;;




############################################################################################################
#                                                                                                          #
#  _____                     _   __      __       _                         _____ _        _               #
# |  __ \                   | |  \ \    / /      | |             /\        / ____| |      (_)              #
# | |  | | ___  ___ ___   __| | __\ \  / /__  ___| |_ ___  _ __ /  \   ___| (___ | |_ _ __ _ _ __   __ _   #
# | |  | |/ _ \/ __/ _ \ / _` |/ _ \ \/ / _ \/ __| __/ _ \| '__/ /\ \ / __|\___ \| __| '__| | '_ \ / _` |  #
# | |__| |  __/ (_| (_) | (_| |  __/\  /  __/ (__| || (_) | | / ____ \\__ \____) | |_| |  | | | | | (_| |  #
# |_____/ \___|\___\___/ \__,_|\___| \/ \___|\___|\__\___/|_|/_/    \_\___/_____/ \__|_|  |_|_| |_|\__, |  #
#                                                                                                   __/ |  #
#                                                                                                  |___/   #
#                                                                                                          #
############################################################################################################
# This function converts a vector of length k over GF(q) to a string message. It is capable of removing
# the random padding added to the message by EncodeStringAsVector().
# Input:
# 	1) V: A vector of length k over GF(q).
# 	2) L: Length of encoded message, prior to random padding.
# 	3) k: Length of V.
# 	4) q: Order of the underlying finite field.
# Output:
# 	1) msg: Decoded string message.
############################################################################################################
DecodeVectorAsString := function(V, L, k, q)
	local msg_num, i, s, len, msg;;

	msg_num := 0;;
	for i in [k-L+1..k] do
		msg_num := msg_num * q;;
		msg_num := msg_num + Int(V[i]);;
	od;;

	s := HexStringInt(msg_num);;
	len := Length(s) / 2;;

	msg := [1..len];;
	for i in [1..len] do
		msg[i] := CharInt(IntHexString(s{[2*i-1..2*i]}));;
	od;;

	return msg;;
end;;

#####################################################################################
#                         _____                             _                       #
#                        |  __ \                           | |                      #
#                        | |  | | ___  ___ _ __ _   _ _ __ | |_                     #
#                        | |  | |/ _ \/ __| '__| | | | '_ \| __|                    #
#                        | |__| |  __/ (__| |  | |_| | |_) | |_                     #
#                        |_____/ \___|\___|_|   \__, | .__/ \__|                    #
#                                                __/ | |                            #
#                                               |___/|_|                            #
#                                                                                   #
#####################################################################################
# This function decrypts the input ciphertext using Niederreiter's encryption scheme.
# Input:
# 	1) ctxt: Ciphertext, generated by calling the Encrypt() function.
# 	2) q: Order of the underlying finite field.
# 	3) k: Plaintext will first be decoded as a vector of length k over GF(q).
# 	4) n: Ciphertext is encoded as a vector of length n over GF(q).
# 	5) GRS: The GRS code, generated by GenParam(), and used for encryption.
#	6) RightInvM: A right inverse of the matrix M, generated by GenParam().
# Output:
#	1) msg: Decrypted string message.
#####################################################################################
Decrypt := function(ctxt, q, k, n, GRS, RightInvM)
	local L, c, decoded, V, msg;;

	L := ctxt[1];;
	c := Codeword(ctxt[2]);;

	decoded := GeneralizedReedSolomonDecoderGao(GRS, c);;
	V := decoded * RightInvM;;

	msg := DecodeVectorAsString(V, L, k, q);;

	return msg;;
end;;



#####################################################################################
#                  __  __       _          ____            _                        #
#                 |  \/  |     (_)        |  _ \          | |                       #
#                 | \  / | __ _ _ _ __    | |_) | ___   __| |_   _                  #
#                 | |\/| |/ _` | | '_ \   |  _ < / _ \ / _` | | | |                 #
#                 | |  | | (_| | | | | |  | |_) | (_) | (_| | |_| |                 #
#                 |_|  |_|\__,_|_|_| |_|  |____/ \___/ \__,_|\__, |                 #
#                                                             __/ |                 #
#                                                            |___/                  #
#####################################################################################
# The following code shows how to generate parameters, and how to encrypt & decrypt.
#####################################################################################
q := NextPrimeInt(500);; k := QuoInt(q,4);; n := q-k;;

params := GenParam(q, k, n);;
GRS := params[1];;
M := params[2];;
RightInvM := params[3];;

# flag is a 16-byte hexadecimal number
msg := "SharifCTF{flag}";;
ctxt := Encrypt(msg, q, k, n, M);;

# Convert M & ctxt from GAP notation to "ordinary" notation
for i in [1..n] do
	ctxt[2][i]:=Int(ctxt[2][i]);;
od;;

for i in [1..k] do
	for j in [1..n] do
		M[i][j]:=Int(M[i][j]);;
	od;;
od;;


# Write Niederreiter public parameters, as well as the ciphertext,
# to the file "Challenge.txt" on Desktop
filename := Filename(DirectoryDesktop(), "Challenge.txt");;
output := OutputTextFile(filename, false);;
AppendTo(output, "q := ", q, ";; ");;
AppendTo(output, "k := ", k, ";; ");;
AppendTo(output, "n := ", n, ";;\n");;
AppendTo(output, "M := ", M, ";;\n");;
AppendTo(output, "ctxt := ", ctxt, ";;");;
CloseStream(output);;

# The file can later be loaded into GAP by running the following commands.
# (M and ctxt are then multiplied by Z(q), to convert them back to GAP notation):
#
#     Read(filename);;
#     M := M*Z(q);;
#     ctxt[2] := ctxt[2]*Z(q);;


Print(Decrypt(ctxt, q, k, n, GRS, RightInvM));;