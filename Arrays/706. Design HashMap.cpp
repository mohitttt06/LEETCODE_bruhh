class MyHashMap {
public:
    vector<pair<int, int>> mp;

    MyHashMap() {

    }

    void put(int key, int value) {

        for (auto &it : mp)
        {
            if (it.first == key)
            {
                it.second = value;
                return;
            }
        }

        mp.push_back({key, value});
    }

    int get(int key) {

        for (auto &it : mp)
        {
            if (it.first == key)
            {
                return it.second;
            }
        }

        return -1;
    }

    void remove(int key) {

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->first == key)
            {
                mp.erase(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
