package com.negocio.empresa;

import com.pessoal.Pessoa;
import com.pessoal.usuario.Usuario;

public class Cliente {
	private Pessoa pessoa = new Pessoa();
	private Usuario usuario = new Usuario();
	// Metodos Getter e Setter
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
	public static Cliente criarCliente(Pessoa pessoa, Usuario usuario) {
		Cliente cliente = new Cliente();
		cliente.setPessoa(pessoa);
		cliente.setUsuario(usuario);
		return cliente;
	}
	
	@Override
	public String toString() {
		return "Cliente [pessoa=" + pessoa + ", usuario=" + usuario + "]";
	}
}
