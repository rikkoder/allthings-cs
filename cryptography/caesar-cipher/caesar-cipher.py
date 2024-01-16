def caesar_cipher_encrypt (plain_text: str, key: int) -> str:
    cipher_text = ''
    for c in plain_text:
        if 'A' <= c <= 'Z':
            # right shifting key positions for A-Z characters
            cipher_text += chr(ord('A') + (ord(c) - ord('A') + key) % 26)
        elif 'a' <= c <= 'z':
			# right shifting key positions for a-z characters
            cipher_text += chr(ord('a') + (ord(c) - ord('a') + key) % 26)
        else:
            cipher_text += c

    return cipher_text


def caesar_cipher_decrypt (cipher_text: str, key: int) -> str:
	# decrypting by left shifing by key positions
    return caesar_cipher_encrypt(cipher_text, -key);


def main ():
    plain_text = "BRUTUS IS A TRAITOR!"
    key = 5

    cipher_text = caesar_cipher_encrypt(plain_text, key)
    decrypted_message = caesar_cipher_decrypt(cipher_text, key)

    print(f'Plain text: {plain_text}')
    print(f'Encrypted cipher text: {cipher_text}')
    print(f'Decrypted message: {decrypted_message}')


if __name__ == '__main__':
    main()
