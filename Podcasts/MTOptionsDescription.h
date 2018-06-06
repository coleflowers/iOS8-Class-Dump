/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSOrderedSet;

@interface MTOptionsDescription : NSObject {

	NSArray* _longTitles;
	NSArray* _shortTitles;
	NSOrderedSet* _valueSet;
	/*^block*/id _footerCallback;
	/*^block*/id _headerCallback;

}

@property (nonatomic,copy) NSArray * longTitles;                 //@synthesize longTitles=_longTitles - In the implementation block
@property (nonatomic,copy) NSArray * shortTitles;                //@synthesize shortTitles=_shortTitles - In the implementation block
@property (nonatomic,copy) NSOrderedSet * valueSet;              //@synthesize valueSet=_valueSet - In the implementation block
@property (nonatomic,copy) id footerCallback;                    //@synthesize footerCallback=_footerCallback - In the implementation block
@property (nonatomic,copy) id headerCallback;                    //@synthesize headerCallback=_headerCallback - In the implementation block
+(id)optionsWithLongTitles:(id)arg1 shortTitles:(id)arg2 valueList:(id)arg3 footerTextCallback:(/*^block*/id)arg4 headerTextCallback:(/*^block*/id)arg5 ;
+(id)optionsWithLongTitles:(id)arg1 shortTitles:(id)arg2 valueList:(id)arg3 ;
-(NSArray *)longTitles;
-(id)footerCallback;
-(id)headerCallback;
-(unsigned long long)indexForValue:(unsigned long long)arg1 ;
-(void)setShortTitles:(NSArray *)arg1 ;
-(void)setLongTitles:(NSArray *)arg1 ;
-(void)setFooterCallback:(id)arg1 ;
-(void)setHeaderCallback:(id)arg1 ;
-(unsigned long long)valueForIndex:(unsigned long long)arg1 ;
-(NSArray *)shortTitles;
-(NSOrderedSet *)valueSet;
-(void)setValueSet:(NSOrderedSet *)arg1 ;
@end
