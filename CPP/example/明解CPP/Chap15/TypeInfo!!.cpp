// type_info���O���w�q�d��

class type_info {
public:
	virtual ~type_info();
	bool operator==(const type_info&) const;
	bool operator!=(const type_info&) const;
	bool before(const type_info&) const;
	const char* name() const;

private:
	type_info(const type_info&);		// ���ƻs�غc�l�L�Ĥ�
	type_info& operator=(const type_info&);	// �����w�B��l�L�Ĥ�
};
