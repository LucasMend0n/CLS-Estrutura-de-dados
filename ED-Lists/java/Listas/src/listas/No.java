package listas;

public class No<T> {
	
	private T elemento;
	private No<T> proximo;
	
	
	
	public No(T elemenT) {
		this.elemento = elemenT;
		this.proximo = null; 
	}

	public No(T elemenT, No<T> proximo) {
		this.elemento = elemenT;
		this.proximo = proximo;
	}

	public T getElemenT() {
		return elemento;
	}

	public void setElemenT(T elemenT) {
		this.elemento = elemenT;
	}

	public No<T> getProximo() {
		return proximo;
	}

	public void setProximo(No<T> proximo) {
		this.proximo = proximo;
	}

	@Override
	public String toString() {
		
		StringBuilder builder = new StringBuilder();
		builder.append("No [elemento=").append(elemento).append(", proximo=").append(proximo).append("]");
		return builder.toString();
	}
	
	
	
	
	
	

}
