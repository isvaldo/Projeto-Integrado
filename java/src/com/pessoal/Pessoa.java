package com.pessoal;

import java.util.Arrays;

import com.pessoal.contato.Contato;

public class Pessoa {
	private String nome;
	private String nascimento;
	private int cpf;
	private int rg;
	private Contato[] telefone = new Contato[2];
	
	
	// metodos Getter e setter
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getNascimento() {
		return nascimento;
	}
	public void setNascimento(String nascimento) {
		this.nascimento = nascimento;
	}
	public int getCpf() {
		return cpf;
	}
	public void setCpf(int cpf) {
		this.cpf = cpf;
	}
	public int getRg() {
		return rg;
	}
	public void setRg(int rg) {
		this.rg = rg;
	}
	public Contato[] getTelefone() {
		return telefone;
	}
	public void setTelefone(Contato[] telefone) {
		this.telefone = telefone;
	}
	
	// criar objeto pessoa
	
	public static Pessoa criarPessoa(String nome,String nascimento,int cpf,int rg,Contato[] telefone){
		Pessoa pessoa = new Pessoa();
		pessoa.setNome(nome);
		pessoa.setNascimento(nascimento);
		pessoa.setCpf(cpf);
		pessoa.setRg(rg);
		pessoa.setTelefone(telefone);
		return pessoa;
		 
	}
	@Override
	public String toString() {
		return "Pessoa [nome=" + nome + ", nascimento=" + nascimento + ", cpf="
				+ cpf + ", rg=" + rg + ", telefone="
				+ Arrays.toString(telefone) + "]";
	}
	
	
	

}
