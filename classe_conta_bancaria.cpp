class conta_bancaria{
	private:
	float saldo;
	
	public:
	void setsaldo(float _saldo){
		 saldo - _saldo 
	} 
	
	string getsaldo(){
	return saldo;
	}
	
	void saca(float valor){
		 saldo -= valor;
	}
		
	void deposita(float valor){
		 saldo += valor;
      }
	};		 