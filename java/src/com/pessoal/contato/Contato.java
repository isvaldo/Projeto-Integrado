package com.pessoal.contato;

public class Contato {
	// Contato pode ser telefonico, email etc..
	private String tipoContato;
	private String contato;
	// Getter e setters
	public String getTipoContato() {
		return tipoContato;
	}
	public void setTipoContato(String tipoContato) {
		this.tipoContato = tipoContato;
	}
	public String getContato() {
		return contato;
	}
	public void setContato(String contato) {
		this.contato = contato;
	}
	// metodo para criar um novo contato
	public static Contato adicionarContato(String tipoContato,String contato){
		Contato newcontato = new Contato();
		newcontato.setContato(contato);
		newcontato.setTipoContato(tipoContato);
		return newcontato;
	}
	@Override
	public String toString() {
		return "Contato [tipoContato=" + tipoContato + ", contato=" + contato
				+ "]";
	}
	
	
	
	
}
