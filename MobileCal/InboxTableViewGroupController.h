/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol InboxTableViewGroupController <NSObject>
@optional
-(void)dismissAll;

@required
-(void)refreshIfNeeded;
-(id)initWithModel:(id)arg1 delegate:(id)arg2;
-(BOOL)hasRows;
-(void)rowSelected:(long long)arg1;
-(BOOL)canSelectRow:(long long)arg1;
-(double)estimatedHeightForRow:(long long)arg1;
-(id)cellForRow:(long long)arg1;
-(id)titleForHeader;
-(long long)numberOfRows;
-(void)setVisible:(BOOL)arg1;

@end

