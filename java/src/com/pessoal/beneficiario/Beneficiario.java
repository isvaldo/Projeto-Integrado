package com.pessoal.beneficiario;

import com.pessoal.Pessoa;
import com.pessoal.usuario.Usuario;

public class Beneficiario {
	private Pessoa pessoa = new Pessoa();
	private Usuario usuario = new Usuario();
	private int pontos;
	// metodos de Getter e Setter

	public Pessoa getPessoa() {
		return pessoa;
	}
	public void setPessoa(Pessoa pessoa) {
		this.pessoa = pessoa;
	}
	public Usuario getUsuario() {
		return usuario;
	}
	public void setUsuario(Usuario usuario) {
		this.usuario = usuario;
	}
	public int getPontos() {
		return pontos;
	}
	public void setPontos(int pontos) {
		this.pontos = pontos;
	}	
	// metodo criar um beneficiario
	
	public static Beneficiario criarBeneficiario(Pessoa pessoa, Usuario usuario, int pontos){
		Beneficiario beneficiario = new Beneficiario();
		beneficiario.setPessoa(pessoa);
		beneficiario.setUsuario(usuario);
		beneficiario.setPontos(pontos);
		return beneficiario;
	}
	@Override
	public String toString() {
		return "Beneficiario [pessoa=" + pessoa + ", usuario=" + usuario
				+ ", pontos=" + pontos + "]";
	}
	
}
