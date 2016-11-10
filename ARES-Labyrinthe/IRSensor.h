class IRSensor
{
	
	private:
		int pin;
	
	public:
		
		IRSensor(int pin);
		
		const bool isObstacle() const;
	
	
	
};