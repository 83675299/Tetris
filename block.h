class block{
	public:
		void InitateBlock();//��ʼ��������Ϣ 
		void RandBlock();//������ɷ���
		void TurnBlock();//����ת�䷽�� 
		int Speed();//�涨����������ٶ�
		void MoveBlock_left;//�������� 
		void MoveBlock_right;//�����Ҷ� 
		void DownBlock;//�������� 
		void Speed_up;//������� 
	private:
		int	Block_1form_1[4][4];//��Ϊ4��4�У��������У�00 01 10 11
		int	Block_2form_1[4][4];//00 10 11 12
		int	Block_2form_2[4][4];//
		int	Block_2form_3[4][4];//
		int	Block_2form_4[4][4];//	 
		int	Block_3form_1[4][4];//02 10 11 12
		int	Block_3form_2[4][4];//
		int	Block_3form_3[4][4];//
		int	Block_3form_4[4][4];//
		int	Block_4form_1[4][4];//01 10 11 12
		int	Block_4form_2[4][4];//
		int	Block_4form_3[4][4];//
		int	Block_4form_4[4][4];//
		int	Block_5form_1[4][4];//00 01 11 12
		int	Block_5form_2[4][4];//
		int	Block_6form_1[4][4];//01 02 10 11
		int	Block_6form_2[4][4];//
		int	Block_7form_1[4][4];//10 11 12 13
		int	Block_7form_2[4][4];//
};
