package com.pessoal.administracao;

import com.pessoal.Pessoa;

public class Administrador {
	// administrador tem objeto pessoa para guardar suas informaçoes
	// a melhor forma de fazer isso é com extend, porem foge 
	// do escopo de java1
	private Pessoa pessoa = new Pessoa();
	private String filial;
	private String setor;
	private int matricula;
	private double salario;
	private int anosEmpresa;
	
	// metodos Getter e Setter
	public Pessoa getPessoa() {
		return pessoa;
	}
	public void setPessoa(Pessoa pessoa) {
		this.pessoa = pessoa;
	}
	public String getFilial() {
		return filial;
	}
	public void setFilial(String filial) {
		this.filial = filial;
	}
	public String getSetor() {
		return setor;
	}
	public void setSetor(String setor) {
		this.setor = setor;
	}
	public int getMatricula() {
		return matricula;
	}
	public void setMatricula(int matricula) {
		this.matricula = matricula;
	}
	public double getSalario() {
		return salario;
	}
	public void setSalario(double salario) {
		this.salario = salario;
	}
	public int getAnosEmpresa() {
		return anosEmpresa;
	}
	public void setAnosEmpresa(int anosEmpresa) {
		this.anosEmpresa = anosEmpresa;
	}
	// criar um administrador
	
	public static Administrador criarAdministrador(Pessoa pessoa,
			String filial,
			String setor,
			int matricula,
			double salario,
			int anosEmpresa){
		Administrador administrador = new Administrador();
		administrador.setPessoa(pessoa);
		administrador.setFilial(filial);
		administrador.setSetor(setor);
		administrador.setMatricula(matricula);
		administrador.setSalario(salario);
		administrador.setAnosEmpresa(anosEmpresa);
		return administrador;
	}
	@Override
	public String toString() {
		return "Administrador [pessoa=" + pessoa + ", filial=" + filial
				+ ", setor=" + setor + ", matricula=" + matricula
				+ ", salario=" + salario + ", anosEmpresa=" + anosEmpresa + "]";
	}
	
	
	
	
}
