package Questão2;

public class Conta {
	
	protected int numero;
	protected String titular;
	protected Double L_Saque;
	protected Double Saldo;
	
	public Conta() {
		
	}
	
	public Conta(int numero, String titular, Double l_Saque, Double saldo) {
		this.numero = numero;
		this.titular = titular;
		L_Saque = l_Saque;
		Saldo = saldo;
	}

	public int getNumero() {
		return numero;
	}

	public void setNumero(int numero) {
		this.numero = numero;
	}

	public String getTitular() {
		return titular;
	}

	public void setTitular(String titular) {
		this.titular = titular;
	}

	public Double getL_Saque() {
		return L_Saque;
	}

	public void setL_Saque(Double l_Saque) {
		L_Saque = l_Saque;
	}

	public Double getSaldo() {
		return Saldo;
	}

	public void setSaldo(Double saldo) {
		Saldo = saldo;
	}
	
	public void sacar (double valor) 
	{
		ValidaSaque(valor);
		Saldo = Saldo - valor;
	}
	
	public void depositar (double valor) 
	{
		Saldo = Saldo + valor;
	}
	
	public void ValidaSaque (double valor) 
	{
		 if (valor > getL_Saque()) 
		 {
			throw new RuntimeException ("A quantidade está excedendo o limite de saque.");
		 }
		 
		 if (valor > getSaldo()) 
		 {
			throw new RuntimeException ("Saldo Insuficiente.");
		 }
		 
		 
	}
}
