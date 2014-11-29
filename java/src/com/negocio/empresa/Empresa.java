package com.negocio.empresa;

public class Empresa {
	private Cliente cliente = new Cliente();
	private String razaoSocial;
	private int cnpj;
	// Metodos Getter e Setter
	public Cliente getCliente() {
		return cliente;
	}
	public void setCliente(Cliente cliente) {
		this.cliente = cliente;
	}
	public String getRazaoSocial() {
		return razaoSocial;
	}
	public void setRazaoSocial(String razaoSocial) {
		this.razaoSocial = razaoSocial;
	}
	public int getCnpj() {
		return cnpj;
	}
	public void setCnpj(int cnpj) {
		this.cnpj = cnpj;
	}
	public static Empresa criarEmpresa(Cliente cliente, String razaoSocial, int cnpj) {
		Empresa empresa = new Empresa();
		empresa.setCliente(cliente);
		empresa.setRazaoSocial(razaoSocial);
		empresa.setCnpj(cnpj);
		return empresa;
	}
	
	@Override
	public String toString() {
		return "Empresa [cliente=" + cliente + ", razaoSocial=" + razaoSocial
				+ ", cnpj=" + cnpj + "]";
	}
	
	
	
	

}
