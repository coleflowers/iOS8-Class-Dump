/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:45:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class ASPurchasedPage;


@protocol ASChildPurchasedViewController <NSObject>
@property (assign,nonatomic,__weak) id<ASChildPurchasedViewControllerDelegate> delegate; 
@property (nonatomic,retain) ASPurchasedPage * page; 
@required
-(void)setDelegate:(id)arg1;
-(id<ASChildPurchasedViewControllerDelegate>)delegate;
-(ASPurchasedPage *)page;
-(void)setPage:(id)arg1;

@end

