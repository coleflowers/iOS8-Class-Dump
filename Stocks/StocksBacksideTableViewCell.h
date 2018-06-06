/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:42:46 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, Stock;

@interface StocksBacksideTableViewCell : UITableViewCell {

	BOOL _wasDeleted;
	UILabel* _exchangeLabel;
	Stock* _stock;

}

@property (nonatomic,retain) Stock * stock;                //@synthesize stock=_stock - In the implementation block
@property (assign,nonatomic) BOOL wasDeleted;              //@synthesize wasDeleted=_wasDeleted - In the implementation block
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(BOOL)wasDeleted;
-(void)setWasDeleted:(BOOL)arg1 ;
-(Stock *)stock;
-(void)setStock:(Stock *)arg1 ;
@end
