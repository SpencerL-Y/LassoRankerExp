void test(int q, int y) {
	while (q > 0) {
		if (y > 0) {
			q = q - y - 1;
		} else {
			q = q + y - 1;
		}
		y = -y;
	}
}
