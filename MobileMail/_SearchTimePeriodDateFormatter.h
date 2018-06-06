/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateFormatter;

@interface _SearchTimePeriodDateFormatter : NSObject {

	unsigned long long _deltaUnit;
	long long _delta;
	NSDateFormatter* _dateFormatter;
	unsigned long long _units;

}

@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (assign,nonatomic) unsigned long long units;                     //@synthesize units=_units - In the implementation block
-(void)useDelta:(long long)arg1 forUnit:(unsigned long long)arg2 ;
-(id)alternativeFromPhrase:(id)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(void)dealloc;
-(unsigned long long)units;
-(void)setUnits:(unsigned long long)arg1 ;
@end

