/*
                    __
                   /\ \
 _ __   ___     ___\ \ \/'\     ___      __      ___     ___      __
/\`'__\/ __`\  /'___\ \ , <    / __`\  /'__`\  /' _ `\ /' _ `\  /'__`\
\ \ \//\ \L\ \/\ \__/\ \ \\`\ /\ \L\ \/\ \L\.\_/\ \/\ \/\ \/\ \/\ \L\.\_
 \ \_\\ \____/\ \____\\ \_\ \_\ \____/\ \__/.\_\ \_\ \_\ \_\ \_\ \__/.\_\
  \/_/ \/___/  \/____/ \/_/\/_/\/___/  \/__/\/_/\/_/\/_/\/_/\/_/\/__/\/_/
 
 
*/
 
#ifndef __AHA__HEADER
#define __AHA__HEADER
 
#include <bits/stdc++.h>
using namespace std;
#define g0 get<0>
#define g1 get<1>
#define g2 get<2>
#define ft first
#define sd second
#define sz(x) (i6) x.size()
#define psb(x) push_back(x)
#define ppb() pop_back()
#define bg(x) x.begin()
#define ed(x) x.end()
#define col(x) x.begin(), x.end()
#define srt(x) sort(x.begin(), x.end())
 
#define pq priority_queue
#define fn function
#ifdef LOCAL
#define git stauDBG_MACRO_NO_WARNING
#include <dbg.h>
#else
#define dbg(...)
#endif
#define endl '\n'
 
template <typename T>
using vec = vector<T>;
template <typename T>
using deq = deque<T>;
template <typename K, typename V>
using hmap = unordered_map<K, V>;
 
using str = string;
using vb = vec<bool>;
 
using i3 = int32_t;
using i6 = int64_t;
using i64 = int64_t;
using u3 = uint32_t;
using u6 = uint64_t;
 
using d6 = long double;
 
using p3 = pair<i3, i3>;
using vi3 = vec<i3>;
using vp3 = vec<p3>;
 
using p6 = pair<i6, i6>;
using vi6 = vec<i6>;
using vp6 = vec<p6>;
using vv = vec<vi6>;
 
using dp6 = deq<p6>;
using di6 = deq<i6>;
 
using mi6 = map<i6, i6>;
using mp6 = map<p6, i6>;
using si6 = set<i6>;
using hi6 = hmap<i6, i6>;
 
using bs = bitset<64>;
 
using graph = vv;
using matrix = vv;
 
const d6 EPS = 1 / 1000000.0;
const i6 INF = INT64_MAX / 4;
const i6 NINF = -INF;
const i6 ZERO = 0;
const i6 ONE = 1;
 
namespace std {
template <typename T1, typename T2>
struct hash<pair<T1, T2>> {
  std::size_t operator()(const pair<T1, T2>& pair) const noexcept {
    return hash<T1>()(pair.first) ^ hash<T2>()(pair.second);
  }
};
}  // namespace std
 
template <typename T1, typename T2>
istream& operator>>(istream& stream, pair<T1, T2>& p) {
  stream >> p.ft;
  stream >> p.sd;
  return stream;
}
 
template <typename T1, typename T2>
ostream& operator<<(ostream& stream, const pair<T1, T2>& p) {
  return stream << p.ft << " " << p.sd;
}
 
template <typename T>
istream& operator>>(istream& stream, vec<T>& v) {
  if (v.empty()) {
    u6 len;
    stream >> len;
    v.assign(len, T());
  }
  for (auto i = 0; i < sz(v); i++) {
    stream >> v[i];
  }
  return stream;
}
 
template <typename T>
ostream& operator<<(ostream& stream, const vec<T>& v) {
  if (!v.empty()) {
    stream << v[0];
  }
  for (auto i = 1; i < sz(v); i++) {
    stream << " " << v[i];
  }
  return stream;
}
 
template <typename T>
istream& operator>>(istream& stream, deq<T>& v) {
  if (v.empty()) {
    u6 len;
    stream >> len;
    v.assign(len, T());
  }
  for (auto i = 0; i < sz(v); i++) {
    stream >> v[i];
  }
  return stream;
}
 
template <typename T>
ostream& operator<<(ostream& stream, const deq<T>& v) {
  if (!v.empty()) {
    stream << v[0];
  }
  for (auto i = 1; i < sz(v); i++) {
    stream << " " << v[i];
  }
  return stream;
}
#endif
 
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
#ifdef LOCAL
  ifstream cin{"input.txt"};
  ofstream cout{"output.txt"};
#endif
 
  cout << "Hello World" << endl;
 
  return 0;
}