from person import Person
from person_repository import PersonRepository

def main():
    print("ok")
    person = Person()
    person_repository = PersonRepository()

    print(person_repository.save(person))

if __name__ == "__main__":
    main()
