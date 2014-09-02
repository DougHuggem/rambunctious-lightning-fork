#ifndef
SMARTWALKER_H_
#define
class SmartWalker
{
	public:
		SmartWalker(){};

		int	runNav();
		int	runHR();
		int	runWatch();
		void	killHR(int pid);
		void	killNav(int pid);

	private:
		// Type placeholders; replace when Vitals and Navigation
		// implemented
		void* vitals;
		void* nav;
	
};
#endif
