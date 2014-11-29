package com.evento;

import java.util.Arrays;

import com.negocio.empresa.Empresa;
import com.pessoal.beneficiario.Beneficiario;

public class Evento {
	private Empresa empresa = new Empresa();
	private Beneficiario[] beneficiario = new Beneficiario[100];
	
	// Metodos Getter e Setter
	
	public Empresa getEmpresa() {
		return empresa;
	}
	public void setEmpresa(Empresa empresa) {
		this.empresa = empresa;
	}
	public Beneficiario[] getBeneficiario() {
		return beneficiario;
	}
	public void setBeneficiario(Beneficiario[] beneficiario) {
		this.beneficiario = beneficiario;
	}
	
	public static Evento criaEvento(Empresa empresa, Beneficiario[] beneficiario) {
		Evento evento = new Evento();
		evento.setEmpresa(empresa);
		evento.setBeneficiario(beneficiario);
		return evento;
		
	}
	
	@Override
	public String toString() {
		return "Evento [empresa=" + empresa + ", beneficiario="
				+ Arrays.toString(beneficiario) + "]";
	}
	
	
	
	
	
	
}
