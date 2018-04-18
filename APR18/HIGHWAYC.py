def updatePoints(ipoints, fpoints, velocity, time, direction):
	for i in range(len(ipoints)):
		if direction[i] == 0:
			ipoints[i] -= velocity[i] * time
			fpoints[i] -= velocity[i] * time
		else:
			ipoints[i] += velocity[i] * time
			fpoints[i] += velocity[i] * time
	return ipoints, fpoints

def main():
	for _ in range(int(input())):
		n, s, y = (int(x) for x in input().split())
		velocity = [int(x) for x in input().split()]
		direction = [int(x) for x in input().split()]
		ipoints = [int(x) for x in input().split()]
		fpoints = [0] * n
		length = [int(x) for x in input().split()]
		time = 0
		pass_time = y/s
		error = 0.000001
		for i in range(n):
			if direction[i] == 0:
				fpoints[i] = ipoints[i] + length[i]
			else:
				fpoints[i] = ipoints[i] - length[i]
		
		
		for i in range(n):
			if direction[i] == 0:
				if(ipoints[i]> 0 and fpoints[i] > 0):
					if(pass_time < abs(ipoints[i] )/velocity[i] - error):
						time += pass_time
					else:
						time += abs(fpoints[i])/velocity[i] + pass_time
					
				elif(ipoints[i] <= 0 and fpoints[i] > 0):
					time += abs(fpoints[i])/velocity[i] + pass_time
					
				else:
					if(ipoints[i] < 0 and fpoints[i] < 0):
						time += pass_time
					else:
						time += abs(fpoints[i] - ipoints[i])/velocity[i] + pass_time


				
			else:
				if(ipoints[i] < 0 and fpoints[i] < 0):
					if(pass_time < abs(ipoints[i] /velocity[i]) - error):
						time += pass_time
					else:
						time += abs(fpoints[i])/velocity[i] + pass_time
					
				elif(ipoints[i]  >= 0 and fpoints[i] < 0):
					time += abs(fpoints[i])/velocity[i] + pass_time
					

				else:
					if(ipoints[i] > 0 and fpoints[i] > 0):
						time += pass_time
					else:
						time += (fpoints[i] - ipoints[i])/velocity[i] +pass_time
			
			ipoints, fpoints = updatePoints(ipoints, fpoints, velocity, time, direction)
			

		print(time)

if __name__ == '__main__':
	main()