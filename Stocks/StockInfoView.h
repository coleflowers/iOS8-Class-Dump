/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:42:46 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>
#import <Stocks/StockUpdateObserver.h>

@class Stock, UILabel, LoadingLabel, StockMetadataGridView, NSString;

@interface StockInfoView : UIView <StockUpdateObserver> {

	Stock* _stock;
	UILabel* _titleLabel;
	LoadingLabel* _loadingLabel;
	StockMetadataGridView* _gridView;
	BOOL _pauseUpdates;
	BOOL _stale;

}

@property (nonatomic,retain) Stock * stock;                          //@synthesize stock=_stock - In the implementation block
@property (assign,getter=isStale,nonatomic) BOOL stale;              //@synthesize stale=_stale - In the implementation block
@property (assign,nonatomic) BOOL drawsBottomLine; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUpdatesPaused:(BOOL)arg1 ;
-(BOOL)drawsBottomLine;
-(void)setDrawsBottomLine:(BOOL)arg1 ;
-(void)_stockWillBeRemoved:(id)arg1 ;
-(void)_redrawGridView;
-(void)_metadataDidUpdate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(Stock *)stock;
-(void)setStock:(Stock *)arg1 ;
-(void)stockUpdateManager:(id)arg1 didUpdateStocks:(id)arg2 updates:(long long)arg3 ;
-(void)stockUpdateManager:(id)arg1 didRequestUpdateForStocks:(id)arg2 updates:(long long)arg3 ;
-(void)stockUpdateManager:(id)arg1 failedToUpdateStocks:(id)arg2 updates:(long long)arg3 ;
-(void)setStale:(BOOL)arg1 ;
-(BOOL)isStale;
@end
