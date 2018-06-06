/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SafariClearBrowsingDataInterval : NSObject {

	NSString* _descriptionOfInterval;
	/*^block*/id _dateAfterWhichDataShouldBeClearedBlock;
	NSString* _aggdIntervalKey;

}

@property (readonly) NSString * descriptionOfInterval;                             //@synthesize descriptionOfInterval=_descriptionOfInterval - In the implementation block
@property (nonatomic,copy) id dateAfterWhichDataShouldBeClearedBlock;              //@synthesize dateAfterWhichDataShouldBeClearedBlock=_dateAfterWhichDataShouldBeClearedBlock - In the implementation block
@property (nonatomic,retain) NSString * aggdIntervalKey;                           //@synthesize aggdIntervalKey=_aggdIntervalKey - In the implementation block
-(NSString *)descriptionOfInterval;
-(id)initWithDescription:(id)arg1 dateAfterWhichDataShouldBeClearedBlock:(/*^block*/id)arg2 ;
-(id)dateAfterWhichDataShouldBeClearedBlock;
-(void)setDateAfterWhichDataShouldBeClearedBlock:(id)arg1 ;
-(NSString *)aggdIntervalKey;
-(void)setAggdIntervalKey:(NSString *)arg1 ;
-(id)init;
-(id)description;
@end

