/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary, NSArray, NSDictionary, NSSet;

@interface StarkOverlayCollectionViewLayout : UICollectionViewLayout {

	NSMutableDictionary* _cellAttributes;
	NSMutableDictionary* _supplementaryAttributes;
	NSArray* _overlayItems;
	BOOL _contentChange;
	BOOL _boundsChange;
	NSDictionary* _oldCellAttributes;
	NSDictionary* _disappearingAttributes;
	NSDictionary* _appearingAttributes;
	NSDictionary* _oldSupplementaryAttributes;
	NSDictionary* _disappearingSupplementaryAttributes;
	NSDictionary* _appearingSupplementaryAttributes;
	NSSet* _indexPathsToDelete;
	NSSet* _indexPathsToInsert;
	double _topOffset;

}

@property (nonatomic,retain) NSArray * overlayItems;              //@synthesize overlayItems=_overlayItems - In the implementation block
@property (assign,nonatomic) double topOffset;                    //@synthesize topOffset=_topOffset - In the implementation block
+(Class)layoutAttributesClass;
-(void)_getUpdateAttributesForItems:(id)arg1 disappearingAttributes:(out id*)arg2 oldCellAttributes:(id)arg3 currentCellAttributes:(id)arg4 appearingAttributes:(out id*)arg5 crossFade:(BOOL)arg6 ;
-(id)initWithOffset:(double)arg1 overlayItems:(id)arg2 ;
-(NSArray *)overlayItems;
-(void)setOverlayItems:(NSArray *)arg1 ;
-(double)topOffset;
-(void)setTopOffset:(double)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(CGRect)_contentBounds;
@end

