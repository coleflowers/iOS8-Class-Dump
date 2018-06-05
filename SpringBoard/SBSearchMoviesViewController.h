/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <SpringBoard/SBSearchResultDetailsViewController.h>

@protocol SBSearchResultDetailsViewControllerDelegate;
@class UIColor, NSURLSessionDataTask, SPSearchResult, SPSearchResultSection, NSArray, NSString;

@interface SBSearchMoviesViewController : UICollectionViewController <SBSearchResultDetailsViewController> {

	NSURLSessionDataTask* _dataTask;
	id<SBSearchResultDetailsViewControllerDelegate> actionDelegate;
	SPSearchResult* _result;
	SPSearchResultSection* _section;
	NSArray* _movies;

}

@property (retain) SPSearchResult * result;                                                     //@synthesize result=_result - In the implementation block
@property (retain) SPSearchResultSection * section;                                             //@synthesize section=_section - In the implementation block
@property (retain) NSArray * movies;                                                            //@synthesize movies=_movies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) id<SBSearchResultDetailsViewControllerDelegate> actionDelegate; 
@property (readonly) BOOL wantsInset; 
@property (retain) UIColor * contentBackgroundColor; 
+(id)viewControllerForResult:(id)arg1 inSection:(id)arg2 ;
-(BOOL)wantsInset;
-(void)setActionDelegate:(id<SBSearchResultDetailsViewControllerDelegate>)arg1 ;
-(id<SBSearchResultDetailsViewControllerDelegate>)actionDelegate;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(SPSearchResultSection *)section;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(SPSearchResult *)result;
-(void)setSection:(SPSearchResultSection *)arg1 ;
-(void)setResult:(SPSearchResult *)arg1 ;
-(NSArray *)movies;
-(void)setMovies:(NSArray *)arg1 ;
-(void)setContentBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)contentBackgroundColor;
@end

