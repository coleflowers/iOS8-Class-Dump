/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:45:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <StoreKitUI/SKUIItemCollectionViewCell.h>

@class ASPurchasedCellLayout;

@interface ASPurchasedCollectionViewCell : SKUIItemCollectionViewCell {

	ASPurchasedCellLayout* _layout;

}

@property (nonatomic,readonly) ASPurchasedCellLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(ASPurchasedCellLayout *)layout;
-(void)configureForItem:(id)arg1 clientContext:(id)arg2 ;
@end
