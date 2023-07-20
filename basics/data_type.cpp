int dataTypes(string type) {
	if (type == "Integer" || type == "Float") return 4;
	if (type == "Double" || type == "Long") return 8;
	return 1;
}
