package com.valores.consumo;

import com.pessoal.beneficiario.Beneficiario;

public class Consumo {
	private Beneficiario beneficiario = new Beneficiario();
	private double kwh_luz;
	private double litros_agua;
	
	// metodos Getter e Setter
	
	public Beneficiario getBeneficiario() {
		return beneficiario;
	}
	public void setBeneficiario(Beneficiario beneficiario) {
		this.beneficiario = beneficiario;
	}
	public double getKwh_luz() {
		return kwh_luz;
	}
	public void setKwh_luz(double kwh_luz) {
		this.kwh_luz = kwh_luz;
	}
	public double getLitros_agua() {
		return litros_agua;
	}
	public void setLitros_agua(double litros_agua) {
		this.litros_agua = litros_agua;
	}
	public static Consumo criarConsumo(Beneficiario beneficiario, double kwh_luz, double litros_agua) {
		Consumo consumo = new Consumo();
		consumo.setBeneficiario(beneficiario);
		consumo.setKwh_luz(kwh_luz);
		consumo.setLitros_agua(litros_agua);
		return consumo;
	}
	
}
