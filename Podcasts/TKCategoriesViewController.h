/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class TKTheme, UITableView, TKLoadingView, NSString, TKCategoryListItemComponent, NSTimer;

@interface TKCategoriesViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	TKTheme* _theme;
	CGRect _frame;
	UITableView* _table;
	TKLoadingView* _spinnerWrapper;
	NSString* _loadingText;
	BOOL _useBackdrop;
	long long _backdropViewPrivateStyle;
	TKCategoryListItemComponent* _categories;
	/*^block*/id _callback;
	NSString* _selectedGenreId;
	long long _level;
	NSTimer* _spinnerTimer;
	NSString* _baseTitle;

}

@property (assign,nonatomic) long long backdropViewPrivateStyle;                    //@synthesize backdropViewPrivateStyle=_backdropViewPrivateStyle - In the implementation block
@property (nonatomic,retain) TKCategoryListItemComponent * categories;              //@synthesize categories=_categories - In the implementation block
@property (nonatomic,copy) id callback;                                             //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSString * selectedGenreId;                            //@synthesize selectedGenreId=_selectedGenreId - In the implementation block
@property (assign,nonatomic) long long level;                                       //@synthesize level=_level - In the implementation block
@property (assign) BOOL useBackdrop;                                                //@synthesize useBackdrop=_useBackdrop - In the implementation block
@property (retain) NSTimer * spinnerTimer;                                          //@synthesize spinnerTimer=_spinnerTimer - In the implementation block
@property (retain) NSString * baseTitle;                                            //@synthesize baseTitle=_baseTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSTimer *)spinnerTimer;
-(void)setSpinnerTimer:(NSTimer *)arg1 ;
-(void)setSelectedGenreId:(NSString *)arg1 ;
-(id)initWithCategories:(id)arg1 withFrame:(CGRect)arg2 withTheme:(id)arg3 withCallback:(/*^block*/id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 withTheme:(id)arg2 withLoadingText:(id)arg3 withCallback:(/*^block*/id)arg4 ;
-(void)showLoading;
-(NSString *)selectedGenreId;
-(id)initWithSpinner:(id)arg1 withFrame:(CGRect)arg2 withTheme:(id)arg3 withCallback:(/*^block*/id)arg4 ;
-(BOOL)useBackdrop;
-(void)setUseBackdrop:(BOOL)arg1 ;
-(NSString *)baseTitle;
-(void)setBaseTitle:(NSString *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)setLevel:(long long)arg1 ;
-(long long)level;
-(void)beginAppearanceTransition:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(TKCategoryListItemComponent *)categories;
-(void)renderView;
-(id)callback;
-(void)setCategories:(TKCategoryListItemComponent *)arg1 ;
-(void)setBackdropViewPrivateStyle:(long long)arg1 ;
-(long long)backdropViewPrivateStyle;
-(void)setCallback:(id)arg1 ;
@end

