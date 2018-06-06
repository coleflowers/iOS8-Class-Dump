/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/TKView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class TKTheme, NSMutableDictionary, UICollectionView, UIScrollView, TKGridComponent, NSString;

@interface TKGridView : TKView <UICollectionViewDataSource, UICollectionViewDelegate> {

	float _rowHeight;
	BOOL _showIndexes;
	long long _currentOrientation;
	TKTheme* _theme;
	NSMutableDictionary* artworkCache;
	UICollectionView* _grid;
	UIScrollView* _contentView;

}

@property (retain) TKGridComponent * component; 
@property (nonatomic,retain) UICollectionView * grid;                 //@synthesize grid=_grid - In the implementation block
@property (nonatomic,retain) UIScrollView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)rectForBounds:(CGRect)arg1 withTop:(double)arg2 withTheme:(id)arg3 withComponent:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 withComponent:(id)arg2 withTheme:(id)arg3 ;
-(void)createGrid;
-(void)setGrid:(UICollectionView *)arg1 ;
-(UIScrollView *)contentView;
-(void)setContentView:(UIScrollView *)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(float)cellWidth;
-(UICollectionView *)grid;
@end

