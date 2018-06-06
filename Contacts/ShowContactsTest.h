/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:35:59 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Contacts.app/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <Contacts/ABApplicationTest.h>

@class NSDictionary, ABPeoplePickerNavigationController, NSString;

@interface ShowContactsTest : NSObject <UINavigationControllerDelegate, ABApplicationTest> {

	int _firstPersonIndex;
	int _nextPersonIndex;
	int _maxPersonIndex;
	NSDictionary* _testOptions;
	ABPeoplePickerNavigationController* _peoplePicker;

}

@property (nonatomic,retain) NSDictionary * testOptions;                                     //@synthesize testOptions=_testOptions - In the implementation block
@property (nonatomic,retain) ABPeoplePickerNavigationController * peoplePicker;              //@synthesize peoplePicker=_peoplePicker - In the implementation block
@property (assign,nonatomic) int firstPersonIndex;                                           //@synthesize firstPersonIndex=_firstPersonIndex - In the implementation block
@property (assign,nonatomic) int nextPersonIndex;                                            //@synthesize nextPersonIndex=_nextPersonIndex - In the implementation block
@property (assign,nonatomic) int maxPersonIndex;                                             //@synthesize maxPersonIndex=_maxPersonIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)startTestWithOptions:(id)arg1 peoplePicker:(id)arg2 ;
-(void)setTestOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)testOptions;
-(void)setFirstPersonIndex:(int)arg1 ;
-(void)setMaxPersonIndex:(int)arg1 ;
-(void)showNextPerson;
-(int)nextPersonIndex;
-(int)maxPersonIndex;
-(void)showMembersList;
-(void)setNextPersonIndex:(int)arg1 ;
-(int)firstPersonIndex;
-(void)dealloc;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(ABPeoplePickerNavigationController *)peoplePicker;
-(void)setPeoplePicker:(ABPeoplePickerNavigationController *)arg1 ;
@end

