// В одномерном массиве, заполненном случайными числами
// в заданном пользователем диапазоне, найти сумму элементов,
// значения которых меньше указанного пользователем.

#include <iostream>
using namespace std;
const int X = 550;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int massiveNumbers[X] = {29, 1113, 153, 458, 359, 1499, 123, 767, 1088, 262, 247, 1364, 1133, 1328, 951, 62,
		1437, 1466, 667, 1407, 102, 656, 559, 1544, 229, 919, 969, 1418, 169, 824, 1266, 701, 520, 215, 339, 1271, 409,
		1287, 1427, 384, 897, 978, 172, 722, 1002, 276, 510, 1543, 1357, 1393, 582, 1049, 322, 7, 752, 251, 218, 1018, 111,
		1496, 315, 928, 502, 1479, 2, 615, 428, 453, 274, 733, 967, 1083, 384, 1444, 278, 1424, 0, 773, 1542, 1090, 517, 885,
		627, 1359, 1324, 646, 149, 1014, 1047, 147, 1495, 1053, 1085, 1077, 296, 967, 1361, 764, 886, 366, 1060, 258, 788, 1140,
		1166, 1026, 489, 1047, 294, 730, 563, 951, 1260, 447, 404, 1549, 800, 1298, 1026, 82, 27, 609, 631, 510, 565, 575, 725,
		1359, 199, 124, 885, 1507, 1037, 866, 1196, 1411, 1337, 1217, 1421, 196, 539, 631, 99, 1522, 419, 944, 646, 762, 238,
		600, 387, 35, 1142, 1099, 142, 195, 861, 648, 563, 575, 777, 1396, 1167, 986, 701, 1488, 758, 1119, 135, 767, 168, 1145,
		90, 1547, 937, 669, 1496, 497, 332, 1145, 1151, 1311, 348, 1386, 1092, 1537, 896, 579, 562, 883, 1276, 1537, 1189, 1005,
		1397, 246, 593, 527, 271, 732, 807, 1447, 722, 1450, 1420, 1361, 1226, 171, 277, 688, 33, 338, 1319, 362, 1283, 132, 1482,
		1331, 706, 1166, 1379, 558, 581, 666, 1331, 382, 386, 1314, 600, 511, 1457, 1074, 433, 738, 17, 1013, 612, 310, 40, 388, 986,
		1248, 1447, 999, 1425, 1229, 498, 1483, 172, 684, 277, 711, 1075, 1088, 1549, 714, 236, 1318, 1172, 378, 654, 344, 303, 677,
		317, 1127, 547, 758, 863, 1425, 672, 1381, 784, 1157, 770, 1037, 191, 7, 193, 833, 1255, 1052, 1231, 98, 970, 482, 1299, 598,
		728, 1311, 1291, 847, 1363, 168, 572, 1311, 1360, 593, 1072, 1316, 524, 574, 701, 1359, 1518, 865, 193, 57, 571, 453, 826,
		125, 1547, 34, 577, 1014, 880, 435, 511, 1137, 1011, 880, 521, 75, 935, 715, 1188, 9, 940, 135, 1261, 340, 634, 1066, 1490,
		648, 854, 1397, 617, 913, 1112, 710, 441, 564, 98, 1135, 209, 641, 1514, 1440, 1229, 1513, 1530, 1121, 1319, 1084, 46, 860,
		1322, 1471, 1115, 216, 1261, 282, 267, 1471, 1327, 1504, 464, 384, 753, 378, 624, 383, 667, 828, 645, 902, 730, 498, 966, 1040,
		655, 174, 1431, 1503, 419, 1061, 1161, 500, 171, 576, 1534, 1002, 797, 855, 287, 513, 1196, 767, 286, 682, 443, 1354, 1475, 1213,
		935, 186, 1412, 238, 553, 697, 12, 8, 1103, 785, 111, 302, 117, 1308, 133, 777, 279, 308, 329, 1030, 71, 1241, 271, 139, 1428, 743,
		1163, 1072, 1337, 1125, 532, 1535, 702, 246, 1311, 620, 772, 604, 1221, 1035, 51, 291, 1412, 801, 740, 177, 1264, 316, 464, 1360,
		1405, 69, 634, 1204, 39, 1340, 1512, 769, 1093, 1372, 452, 1093, 887, 706, 568, 1442, 619, 567, 1408, 599, 1443, 525, 1202, 1538,
		584, 443, 1321, 1466, 1346, 321, 445, 128, 736, 254, 1410, 1090, 761, 579, 1399, 1430, 1422, 863, 1261, 1474, 564, 659, 1379, 346,
		522, 504, 74, 994, 867, 333, 539, 1521, 422, 1024, 910, 695, 1188, 572, 863, 674, 1180, 1416, 471, 59, 1210, 677, 1069, 130, 1087,
		1411, 401, 184, 58, 1250, 1346, 542, 904, 781, 600, 16, 821, 679, 707, 1366, 654, 265, 147, 1059, 1406, 1001};

	int numberUser = 0, rangeNumberUserMin = 0, rangeNumberUserMax = 0;
	int sumNumberUser = 0;
	int i = 0;

	/*while (i < 550) {
		cout << rand() % 1550 << ", ";
		i++;
	} с помощью этого цикла я вывел рандомно 550 чисел для заполнения массива*/

	cout << R"(Введите последовательно 2 числа от 1 до 550 которые будут пределами поиска в массиве 
и не равные друг-другу (начиная с наименьшего))" << endl;
	cin >> rangeNumberUserMin;
	cin >> rangeNumberUserMax;

	while (rangeNumberUserMin >= rangeNumberUserMax || rangeNumberUserMin > 550 || rangeNumberUserMax > 550)
	{
		cout << "Следуйте инструкции!" << endl;
		cout << "Недопустимые условия." << endl;
		cin >> rangeNumberUserMin;
		cin >> rangeNumberUserMax;
	}

	cout << "Введите число, от которого будет поиск наименьших чисел в заданном диапозоне " << endl;
	cin >> numberUser;
	
	while (numberUser > 1550 || numberUser < 0)
	{
		cout << "Следуйте инструкции!" << endl;
		cout << "Недопустимые условия." << endl;
		cin >> numberUser;
	}
	for (rangeNumberUserMin; rangeNumberUserMin < rangeNumberUserMax; rangeNumberUserMin++)
	{
		if (numberUser > massiveNumbers[rangeNumberUserMin])
		{
			sumNumberUser = massiveNumbers[rangeNumberUserMin] + sumNumberUser;
			cout << sumNumberUser << endl;
		}
		else if (numberUser < massiveNumbers[rangeNumberUserMin])
		{
			continue;
		}
		else
		{
			break;
		}
	}
	cout << "Сумма чисел в выбранном диапозоне ниже введёного числа = " << sumNumberUser;

	// капец, я потратил на это час. минут 15 сидел и не понимал почему выдаёт в конце сумасшедшее число, в итоге поменял в цикле FOR
	//в условии знак "меньше либо равно" на "меньше" и всё получилось.
}
	
