/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBAppSwitcherPeopleDataSource <NSObject>
@property (assign,nonatomic) id<SBAppSwitcherPeopleDataSourceConsumer> consumer; 
@required
-(unsigned long long)numberOfContactsInSection:(unsigned long long)arg1;
-(id)contactItemForIndexPath:(id)arg1;
-(id)optionalEmptyPlaceholderStringForSection:(unsigned long long)arg1;
-(void)updateIfNecessary;
-(void)cachedMonogramImageForPersonID:(int)arg1 ofSize:(double)arg2 generatingIfNecessaryWithResult:(/*^block*/id)arg3;
-(id)existingCachedMonogramImageForPersonID:(int)arg1 ofSize:(double)arg2 outIsMask:(BOOL*)arg3;
-(id)silhouetteMonogramOfSize:(double)arg1;
-(void)purgeCaches;
-(id)titleForSection:(unsigned long long)arg1;
-(unsigned long long)numberOfSections;
-(id<SBAppSwitcherPeopleDataSourceConsumer>)consumer;
-(void)setConsumer:(id)arg1;

@end

