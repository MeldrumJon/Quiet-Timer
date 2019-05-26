/* Brightness table: gamma = 2.3 */ 

const uint8_t gamma_table[17][9] = {
	{ 0, 1, 1, 2, 2, 3, 3, 4, 4,}
	{ 0, 1, 2, 3, 4, 5, 6, 7, 8,}
	{ 0, 1, 2, 3, 4, 6, 8, 10, 12}
	{ 0, 1, 2, 4, 6, 9, 11, 14, 18,}
	{ 0, 1, 2, 4, 7, 10, 15, 20, 26,}
	{ 0, 1, 3, 5, 9, 14, 20, 27, 35,}
	{ 0, 1, 4, 7, 12, 18, 26, 35, 46,}
	{ 0, 1, 4, 9, 15, 23, 33, 44, 58}
	{ 0, 1, 3, 8, 15, 25, 38, 54, 73,}
	{ 0, 1, 4, 9, 18, 30, 46, 65, 89,}
	{ 0, 1, 4, 11, 22, 36, 55, 79, 107,}
	{ 0, 1, 5, 13, 26, 43, 65, 93, 126,}
	{ 0, 1, 6, 16, 30, 50, 76, 109, 148,}
	{ 0, 1, 7, 18, 35, 58, 89, 127, 172,}
	{ 0, 2, 8, 21, 40, 67, 102, 145, 197,}
	{ 0, 2, 9, 24, 46, 76, 116, 166, 225,}
	{ 0, 2, 11, 27, 52, 87, 132, 188, 255,}
};
const uint8_t gamma_table[17][10] = {
	{ 0, 0, 0, 0, 1, 1, 2, 2, 3, 4,}
	{ 0, 0, 0, 1, 1, 2, 3, 4, 5, 7,}
	{ 0, 0, 0, 1, 2, 3, 5, 7, 9, 12,}
	{ 0, 0, 1, 1, 3, 5, 7, 10, 14, 18,}
	{ 0, 0, 1, 2, 4, 7, 10, 15, 20, 26,}
	{ 0, 0, 1, 3, 5, 9, 14, 20, 27, 35,}
	{ 0, 0, 1, 4, 7, 12, 18, 26, 35, 46,}
	{ 0, 0, 2, 5, 9, 15, 23, 33, 44, 58,}
	{ 0, 0, 2, 6, 11, 19, 29, 41, 56, 73,}
	{ 0, 1, 3, 7, 14, 23, 35, 50, 68, 89,}
	{ 0, 1, 3, 9, 17, 28, 42, 60, 82, 107,}
	{ 0, 1, 4, 10, 20, 33, 50, 71, 96, 126,}
	{ 0, 1, 5, 12, 23, 38, 58, 83, 113, 148,}
	{ 0, 1, 5, 14, 27, 45, 68, 96, 131, 172,}
	{ 0, 1, 6, 16, 31, 51, 78, 111, 150, 197,}
	{ 0, 1, 7, 18, 35, 58, 89, 126, 172, 225,}
	{ 0, 2, 8, 20, 39, 66, 100, 143, 194, 255,}
};
const uint8_t gamma_table[17][11] = {
	{ 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 4,}
	{ 0, 0, 0, 0, 1, 1, 2, 3, 4, 5, 7,}
	{ 0, 0, 0, 1, 1, 2, 4, 5, 7, 9, 12,}
	{ 0, 0, 0, 1, 2, 4, 6, 8, 11, 14, 18,}
	{ 0, 0, 1, 2, 3, 5, 8, 11, 16, 20, 26,}
	{ 0, 0, 1, 2, 4, 7, 11, 15, 21, 27, 35,}
	{ 0, 0, 1, 3, 6, 9, 14, 20, 28, 36, 46,}
	{ 0, 0, 1, 4, 7, 12, 18, 26, 35, 46, 58,}
	{ 0, 0, 2, 5, 9, 15, 23, 32, 44, 57, 73,}
	{ 0, 0, 2, 6, 11, 18, 27, 39, 53, 70, 89,}
	{ 0, 1, 3, 7, 13, 22, 33, 47, 64, 84, 107,}
	{ 0, 1, 3, 8, 15, 26, 39, 55, 75, 99, 126,}
	{ 0, 1, 4, 9, 18, 30, 46, 65, 89, 116, 148,}
	{ 0, 1, 4, 11, 21, 35, 53, 76, 103, 135, 172,}
	{ 0, 1, 5, 12, 24, 40, 61, 87, 118, 155, 197,}
	{ 0, 1, 6, 14, 27, 46, 69, 99, 135, 177, 225,}
	{ 0, 1, 6, 16, 31, 52, 79, 112, 153, 200, 255,}
};
const uint8_t gamma_table[17][12] = {
	{ 0, 0, 0, 0, 0, 1, 1, 1, 2, 3, 3, 4,}
	{ 0, 0, 0, 0, 1, 1, 2, 2, 3, 4, 6, 7,}
	{ 0, 0, 0, 1, 1, 2, 3, 4, 6, 8, 10, 12,}
	{ 0, 0, 0, 1, 2, 3, 4, 6, 9, 11, 14, 18,}
	{ 0, 0, 1, 1, 3, 4, 6, 9, 12, 16, 21, 26,}
	{ 0, 0, 1, 2, 3, 6, 9, 12, 17, 22, 28, 35,}
	{ 0, 0, 1, 2, 4, 8, 11, 16, 22, 29, 37, 46,}
	{ 0, 0, 1, 3, 6, 9, 14, 21, 28, 37, 47, 58,}
	{ 0, 0, 1, 4, 7, 12, 18, 26, 35, 46, 59, 73,}
	{ 0, 0, 2, 4, 9, 15, 22, 31, 43, 56, 71, 89,}
	{ 0, 0, 2, 5, 10, 17, 27, 38, 51, 67, 86, 107,}
	{ 0, 1, 2, 6, 12, 21, 31, 45, 61, 79, 101, 126,}
	{ 0, 1, 3, 7, 14, 24, 37, 52, 71, 93, 119, 148,}
	{ 0, 1, 3, 9, 17, 28, 43, 61, 83, 108, 138, 172,}
	{ 0, 1, 4, 10, 19, 32, 49, 70, 95, 124, 158, 197,}
	{ 0, 1, 4, 11, 22, 37, 56, 80, 108, 142, 181, 225,}
	{ 0, 1, 5, 13, 25, 42, 63, 90, 123, 161, 205, 255,}
};
const uint8_t gamma_table[17][13] = {
	{ 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 4,}
	{ 0, 0, 0, 0, 1, 1, 1, 2, 3, 4, 5, 6, 7,}
	{ 0, 0, 0, 0, 1, 2, 2, 3, 5, 6, 8, 10, 12,}
	{ 0, 0, 0, 1, 1, 2, 4, 5, 7, 9, 12, 15, 18,}
	{ 0, 0, 0, 1, 2, 3, 5, 8, 10, 13, 17, 21, 26,}
	{ 0, 0, 1, 1, 3, 5, 7, 10, 14, 18, 23, 29, 35,}
	{ 0, 0, 1, 2, 4, 6, 9, 13, 18, 24, 30, 38, 46,}
	{ 0, 0, 1, 2, 5, 8, 12, 17, 23, 30, 38, 47, 58,}
	{ 0, 0, 1, 3, 6, 10, 15, 21, 29, 38, 48, 60, 73,}
	{ 0, 0, 1, 4, 7, 12, 18, 26, 35, 46, 59, 73, 89,}
	{ 0, 0, 2, 4, 9, 14, 22, 31, 42, 55, 70, 88, 107,}
	{ 0, 0, 2, 5, 10, 17, 26, 36, 50, 65, 83, 103, 126,}
	{ 0, 0, 2, 6, 12, 20, 30, 43, 58, 76, 97, 121, 148,}
	{ 0, 1, 3, 7, 14, 23, 35, 50, 68, 89, 113, 141, 172,}
	{ 0, 1, 3, 8, 16, 26, 40, 57, 78, 102, 130, 161, 197,}
	{ 0, 1, 4, 9, 18, 30, 46, 65, 89, 116, 148, 184, 225,}
	{ 0, 1, 4, 11, 20, 34, 52, 74, 100, 132, 168, 209, 255,}
};
const uint8_t gamma_table[17][14] = {
	{ 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 4,}
	{ 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 4, 5, 6, 7,}
	{ 0, 0, 0, 0, 1, 1, 2, 3, 4, 5, 7, 8, 10, 12,}
	{ 0, 0, 0, 1, 1, 2, 3, 4, 6, 8, 10, 12, 15, 18,}
	{ 0, 0, 0, 1, 2, 3, 4, 6, 9, 11, 14, 18, 22, 26,}
	{ 0, 0, 0, 1, 2, 4, 6, 8, 11, 15, 19, 24, 29, 35,}
	{ 0, 0, 1, 2, 3, 5, 8, 11, 15, 20, 25, 31, 38, 46,}
	{ 0, 0, 1, 2, 4, 6, 10, 14, 19, 25, 32, 39, 48, 58,}
	{ 0, 0, 1, 3, 5, 8, 12, 18, 24, 31, 40, 50, 61, 73,}
	{ 0, 0, 1, 3, 6, 10, 15, 21, 29, 38, 49, 61, 74, 89,}
	{ 0, 0, 1, 4, 7, 12, 18, 26, 35, 46, 59, 73, 89, 107,}
	{ 0, 0, 2, 4, 8, 14, 21, 30, 41, 54, 69, 86, 105, 126,}
	{ 0, 0, 2, 5, 10, 16, 25, 36, 48, 64, 81, 101, 123, 148,}
	{ 0, 0, 2, 6, 11, 19, 29, 41, 56, 74, 94, 117, 143, 172,}
	{ 0, 1, 3, 7, 13, 22, 33, 47, 64, 85, 108, 134, 164, 197,}
	{ 0, 1, 3, 8, 15, 25, 38, 54, 74, 97, 123, 153, 187, 225,}
	{ 0, 1, 3, 9, 17, 28, 43, 61, 83, 109, 139, 174, 212, 255,}
};
const uint8_t gamma_table[17][15] = {
	{ 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 3, 3, 4,}
	{ 0, 0, 0, 0, 0, 1, 1, 1, 2, 3, 3, 4, 5, 6, 7,}
	{ 0, 0, 0, 0, 1, 1, 2, 2, 3, 4, 6, 7, 8, 10, 12,}
	{ 0, 0, 0, 1, 1, 2, 3, 4, 5, 7, 8, 10, 13, 15, 18,}
	{ 0, 0, 0, 1, 1, 2, 4, 5, 7, 9, 12, 15, 18, 22, 26,}
	{ 0, 0, 0, 1, 2, 3, 5, 7, 10, 13, 16, 20, 25, 30, 35,}
	{ 0, 0, 1, 1, 3, 4, 7, 9, 13, 17, 21, 26, 32, 39, 46,}
	{ 0, 0, 1, 2, 3, 5, 8, 12, 16, 21, 27, 33, 41, 49, 58,}
	{ 0, 0, 1, 2, 4, 7, 10, 15, 20, 26, 34, 42, 51, 62, 73,}
	{ 0, 0, 1, 3, 5, 8, 13, 18, 25, 32, 41, 51, 62, 75, 89,}
	{ 0, 0, 1, 3, 6, 10, 15, 22, 30, 39, 49, 61, 75, 90, 107,}
	{ 0, 0, 1, 4, 7, 12, 18, 26, 35, 46, 58, 72, 88, 106, 126,}
	{ 0, 0, 2, 4, 8, 14, 21, 30, 41, 54, 68, 85, 104, 125, 148,}
	{ 0, 0, 2, 5, 10, 16, 25, 35, 47, 62, 79, 99, 121, 145, 172,}
	{ 0, 0, 2, 6, 11, 18, 28, 40, 54, 71, 91, 113, 138, 166, 197,}
	{ 0, 1, 3, 7, 13, 21, 32, 46, 62, 81, 104, 129, 158, 190, 225,}
	{ 0, 1, 3, 7, 14, 24, 36, 52, 70, 92, 118, 146, 179, 215, 255,}
};