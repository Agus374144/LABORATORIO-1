struct Proveedor{
	
	int codProve;
	
	
};

struct Producto{
	int codProducto;
	char descrip[51];
	int importe;
	int cantidad;
	struct Proveedor prove;
};


