
public class Beneficiario {
	
	private String nome, e_mail, eventos_inscritos;
	private int cpf, rg, data_nascimento;
	
	public void inscrever_evento() {
		
	}
	
	public void cancelar_inscricao() {
		
	}
	
	public void efetuar_cadastro() {
		
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public String getNome() {
		return nome;
	}
	
	public void setE_Mail(String e_mail) {
		this.e_mail = e_mail;
	}
	
	public String getE_Mail() {
		return e_mail;
	}
	
	public void setEventos_Inscritos(String eventos_inscritos) {
		this.eventos_inscritos = eventos_inscritos;
	}
	
	public String getEventos_Inscritos() {
		return eventos_inscritos;
	}
	
	public void setCpf (int cpf) {
		this.cpf = cpf;
	}
	
	public void setRg (int rg) {
		this.rg = rg;
	}
	
	public void setData_Nascimento (int data_nascimento) {
		this.data_nascimento = data_nascimento;
	}
	
	public int getCpf() {
		return cpf;
	}
	
	public int getRg() {
		return rg;
	}
	
	public int getData_Nascimento() {
		return data_nascimento;
	}

}
