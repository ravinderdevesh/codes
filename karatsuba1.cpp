//============================================================================
// Name        : 
// Author      : Atul Kumar Gupta
// Description : 
// Status	   : AC
//============================================================================

#include <bits/stdc++.h>

using namespace std;

#define dg(x) cout << '>' << #x << ':' << x << endl;
#define sz(c)  (int) c.size()
#define all(c) c.begin(), c.end()
#define tr(container,it) for(__typeof(container.begin()) it = container.begin();it != container.end(); it++)
#define pii pair<int,int>
#define present(s,x) s.find(x) != s.end()
#define cpresent(c,x) find(all(c),x) != c.end()
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
#define dep(i,n) for(int i=n-1;i>=0;i--)
#define repn(i,a,b) for(int i=a; i<b;i++)
#define ini(n) scanf("%d",&n)
#define ioa(n,a) { ini(n); rep(i,n) ini(a[i]) ;}
#define ind(n,m) scanf("%d %d",&n,&m);
#define inl(n) scanf("%l64d",&n)
#define ins(n) scanf("%s",n);
#define ina(n) cin>>n
#define opi(n) printf("%d",n)
#define opl(n) printf("%l64d",n)
#define ops(n) printf("%s",n)
#define opn printf("\n")
#define opsp printf(" ");
#define opa(n) cout<<n
 
#define TRACE
 
#ifdef TRACE
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;
 
#else
 
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#define trace4(a, b, c, d)    
#define trace5(a, b, c, d, e)
#define trace6(a, b, c, d, e, f)

#endif 

typedef pair<int,int> pi;
typedef vector<pi> vp;
typedef vector<vp> vvp;
typedef vector<int> vi;
typedef unsigned long long int ull;
typedef long long int ll;
typedef vector< vi > vvi;
typedef priority_queue<int> pq;
typedef priority_queue<pi,vp,greater<pi> > mpq;

int gcd(int A, int B) {
    if(B==0)
        return A;
    else
        return gcd(B, A % B);
}
int length(int a){
	int c=0;
	while(a!=0){
		a/=10;
		c++;
	}
	return c;
}
int power(int a,int b){
	int ans =1;
	while(b--)
		ans *= a;
	return ans;
}
int karatsuba(int p, int q , int n){
	if(n==1){
		return p*q;
	}
	else{
		int a = (p/power(10,n/2));
		int b = (p%power(10,n/2));
		int c = (q/power(10,n/2));
		int d = (q%power(10,n/2));
		int s1 = karatsuba(a,c,length(a));
		int step1 = power(10,n)*s1;
		int step2 = karatsuba(b,d,length(b));
		int s3 = ((karatsuba(a+b,c+d,length(a+c)))) - s1 - step2;
		int step3 = power(10,n/2)*s3;
		return step1+step2 + step3;
		
	}
}


int main(){
	//ios_base::sync_with_stdio(false);cin.tie(NULL);
	int p,q;
	cin>>p>>q;
	int n = length(p);
	int ans = karatsuba(p , q , n);
	cout<<ans;
}

	

	

//============================================================================
// Name        : 
// Author      : Atul Kumar Gupta
// Description : 
// Status	   : AC
//============================================================================

#include <bits/stdc++.h>

using namespace std;

#define dg(x) cout << '>' << #x << ':' << x << endl;
#define sz(c)  (int) c.size()
#define all(c) c.begin(), c.end()
#define tr(container,it) for(__typeof(container.begin()) it = container.begin();it != container.end(); it++)
#define pii pair<int,int>
#define present(s,x) s.find(x) != s.end()
#define cpresent(c,x) find(all(c),x) != c.end()
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
#define dep(i,n) for(int i=n-1;i>=0;i--)
#define repn(i,a,b) for(int i=a; i<b;i++)
#define ini(n) scanf("%d",&n)
#define ioa(n,a) { ini(n); rep(i,n) ini(a[i]) ;}
#define ind(n,m) scanf("%d %d",&n,&m);
#define inl(n) scanf("%l64d",&n)
#define ins(n) scanf("%s",n);
#define ina(n) cin>>n
#define opi(n) printf("%d",n)
#define opl(n) printf("%l64d",n)
#define ops(n) printf("%s",n)
#define opn printf("\n")
#define opsp printf(" ");
#define opa(n) cout<<n
 
#define TRACE
 
#ifdef TRACE
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;
 
#else
 
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#define trace4(a, b, c, d)    
#define trace5(a, b, c, d, e)
#define trace6(a, b, c, d, e, f)

#endif 

typedef pair<int,int> pi;
typedef vector<pi> vp;
typedef vector<vp> vvp;
typedef vector<int> vi;
typedef unsigned long long int ull;
typedef long long int ll;
typedef vector< vi > vvi;
typedef priority_queue<int> pq;
typedef priority_queue<pi,vp,greater<pi> > mpq;

int gcd(int A, int B) {
    if(B==0)
        return A;
    else
        return gcd(B, A % B);
}


int main(){
	//ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	
}

	

	

