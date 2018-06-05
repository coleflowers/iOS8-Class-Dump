/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPPlaceCorrectableItem.h>

@class NSMapTable, RAPPlaceCorrectableString, NSArray, NSString;

@interface RAPPlaceCorrectableAddress : NSObject <RAPPlaceCorrectableItem> {

	NSMapTable* _observers;
	BOOL _markedWrong;
	long long _kind;
	RAPPlaceCorrectableString* _street;
	RAPPlaceCorrectableString* _city;
	RAPPlaceCorrectableString* _state;
	RAPPlaceCorrectableString* _zipCode;
	RAPPlaceCorrectableString* _country;
	NSArray* _orderedCorrectableItems;
	NSString* _addressFormattingLocaleIdentifier;

}

@property (nonatomic,copy) NSString * addressFormattingLocaleIdentifier;              //@synthesize addressFormattingLocaleIdentifier=_addressFormattingLocaleIdentifier - In the implementation block
@property (nonatomic,readonly) RAPPlaceCorrectableString * street;                    //@synthesize street=_street - In the implementation block
@property (nonatomic,readonly) RAPPlaceCorrectableString * city;                      //@synthesize city=_city - In the implementation block
@property (nonatomic,readonly) RAPPlaceCorrectableString * state;                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) RAPPlaceCorrectableString * zipCode;                   //@synthesize zipCode=_zipCode - In the implementation block
@property (nonatomic,readonly) RAPPlaceCorrectableString * country;                   //@synthesize country=_country - In the implementation block
@property (nonatomic,readonly) NSArray * orderedCorrectableItems;                     //@synthesize orderedCorrectableItems=_orderedCorrectableItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (getter=isEdited,nonatomic,readonly) BOOL edited; 
@property (nonatomic,readonly) long long kind;                                        //@synthesize kind=_kind - In the implementation block
@property (assign,getter=isMarkedWrong,nonatomic) BOOL markedWrong;                   //@synthesize markedWrong=_markedWrong - In the implementation block
-(BOOL)isEdited;
-(void)addObserver:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(NSArray *)orderedCorrectableItems;
-(id)_initWithStreet:(id)arg1 city:(id)arg2 state:(id)arg3 zipCode:(id)arg4 country:(id)arg5 addressFormattingLocaleIdentifier:(id)arg6 ;
-(void)setMarkedWrong:(BOOL)arg1 ;
-(NSString *)addressFormattingLocaleIdentifier;
-(void)_invokeChangeHandlers;
-(void)revertCorrections;
-(BOOL)isMarkedWrong;
-(void)setAddressFormattingLocaleIdentifier:(NSString *)arg1 ;
-(RAPPlaceCorrectableString *)zipCode;
-(RAPPlaceCorrectableString *)city;
-(RAPPlaceCorrectableString *)state;
-(void)removeObserver:(id)arg1 ;
-(long long)kind;
-(NSString *)localizedTitle;
-(RAPPlaceCorrectableString *)country;
-(RAPPlaceCorrectableString *)street;
@end
