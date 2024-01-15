#include <stdio.h>

#define	MAX_TEXT_LENGTH	50

void caesar_cipher_encrypt (char *cipher_text, const char *const plain_text, int key) {
	for (int i = 0; i < MAX_TEXT_LENGTH && plain_text[i] != '\0'; i++) {
		if (plain_text[i] >= 'A' && plain_text[i] <= 'Z') {
			cipher_text[i] = 'A' + (plain_text[i] - 'A' + key) % 26;
		} else if (plain_text[i] >= 'a' && plain_text[i] <= 'z') {
			cipher_text[i] = (plain_text[i] - 'a' + key) % 26;
		} else {
			cipher_text[i] = plain_text[i];
		}
	}
}

void caesar_cipher_decrypt (char *decrypted_message, const char *const cipher_text, int key) {
	caesar_cipher_encrypt(decrypted_message, cipher_text, -key);
}

int main () {
	char plain_text[MAX_TEXT_LENGTH] = "BRUTUS IS A TRAITOR!";
	char cipher_text[MAX_TEXT_LENGTH], decrypted_message[MAX_TEXT_LENGTH];
	int key = 5;

	caesar_cipher_encrypt(cipher_text, plain_text, key);
	caesar_cipher_decrypt(decrypted_message, cipher_text, key);

	printf("Plain text: %s\n", plain_text);
	printf("Encrypted cipher text: %s\n", cipher_text);
	printf("Decrypted message: %s\n", decrypted_message);

	return 0;
}
