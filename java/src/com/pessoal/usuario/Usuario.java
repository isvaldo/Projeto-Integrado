package com.pessoal.usuario;

public class Usuario {
	private String login;
	private String email;
	private String senha;
	private String data_registro;
	private String ultivaVezLogado;

	// metodos de Getter e Setter

	public String getLogin() {
		return login;
	}

	public void setLogin(String login) {
		this.login = login;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	public String getSenha() {
		return senha;
	}

	public void setSenha(String senha) {
		this.senha = senha;
	}

	public String getData_registro() {
		return data_registro;
	}

	public void setData_registro(String data_registro) {
		this.data_registro = data_registro;
	}

	public String getUltivaVezLogado() {
		return ultivaVezLogado;
	}

	public void setUltivaVezLogado(String ultivaVezLogado) {
		this.ultivaVezLogado = ultivaVezLogado;
	}

	// criar novo objeto usuario
	public static Usuario criarUsuario(String login, String email,String senha, String data_registro, String ultivaVezLogado) {
		Usuario usuario = new Usuario();
		usuario.setLogin(login);
		usuario.setEmail(email);
		usuario.setSenha(senha);
		usuario.setData_registro(data_registro);
		usuario.setUltivaVezLogado(ultivaVezLogado);
		return usuario;
	}

	@Override
	public String toString() {
		return "Usuario [login=" + login + ", email=" + email + ", senha="
				+ senha + ", data_registro=" + data_registro
				+ ", ultivaVezLogado=" + ultivaVezLogado + "]";
	}
	
}
