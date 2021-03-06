/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:59:37 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSlideShow.app/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSlideShow/MobileSlideShow-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <MobileSlideShow/PLCameraImporterDelegate.h>
#import <MobileSlideShow/PLConfigurableNavigationDisplayOptions.h>

@class UIView, NSString, PUPhotosGridViewControllerPadSpec, PLCameraImporter, NSMutableIndexSet, PLTemporaryImageTable, PLImportSessionInfo, UIAlertView, UIBarButtonItem, UIActionSheet, NSTimer, PLEmptyAlbumView;

@interface WImportViewController : UICollectionViewController <UIActionSheetDelegate, PLCameraImporterDelegate, PLConfigurableNavigationDisplayOptions> {

	PUPhotosGridViewControllerPadSpec* _spec;
	PLCameraImporter* _importer;
	NSMutableIndexSet* _itemsAlreadyInLibraryIndexes;
	BOOL _readingImportItems;
	BOOL _completedAnImport;
	PLTemporaryImageTable* _thumbnailTable;
	NSMutableIndexSet* _thumbnailsNotYetLoaded;
	PLImportSessionInfo* _importSessionInfo;
	CFUserNotificationRef _importCompleteNotification;
	UIAlertView* _notEnoughSpaceAlert;
	UIAlertView* _confirmDupsAlert;
	UIBarButtonItem* _importButtonItem;
	UIBarButtonItem* _deleteButtonItem;
	UIBarButtonItem* _stopBarItem;
	UIView* _customTitleView;
	NSString* _customTitle;
	UIActionSheet* _importPopout;
	UIActionSheet* _deletePopout;
	NSTimer* _deletedItemsTimer;
	NSTimer* _icSleepPreventionTimer;
	UIView* _loadingIndicatorView;
	PLEmptyAlbumView* _emptyAlbumView;
	unsigned long long _busyCount;
	BOOL _canSkipDupCheckOnDelete;
	BOOL _skipDupCheckOnDelete;
	BOOL _containsMultiRepAssets;
	BOOL _allowsSelection;
	id _mstreamd_pause_context;

}

@property (nonatomic,retain) PLCameraImporter * importer;              //@synthesize importer=_importer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) UIView * customTitleView;                           //@synthesize customTitleView=_customTitleView - In the implementation block
@property (copy) NSString * customTitle;                               //@synthesize customTitle=_customTitle - In the implementation block
-(id)importDevice;
-(void)setImportDevice:(id)arg1 ;
-(void)handleImportCompleteAlertResponse:(CFUserNotificationRef)arg1 flags:(unsigned long long)arg2 ;
-(id)_selectedIndexes;
-(void)_setSelectedIndexes:(id)arg1 ;
-(id)_dashedBoxPlaceholderImage;
-(void)import:(id)arg1 ;
-(void)stopImport:(id)arg1 ;
-(id)_deletableIndexesOfItemsAtIndexes:(id)arg1 ;
-(void)_updateThumbnailForCell:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_updateCell:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)showImportedBadgesForItemsAtIndexes:(id)arg1 ;
-(void)_deletedItemsTimerFired:(id)arg1 ;
-(void)_photosDatabaseHasChanged:(id)arg1 ;
-(void)_cancelAlerts;
-(void)setImporter:(PLCameraImporter *)arg1 ;
-(void)_dismissPopupsAnimated:(BOOL)arg1 ;
-(void)_icSleepPreventionTimerFired:(id)arg1 ;
-(void)_updateItemViewAtIndex:(unsigned long long)arg1 ;
-(BOOL)_isItemVisibleAtIndex:(long long)arg1 ;
-(void)_scrollToCurrentImportIndex;
-(void)_beginUninterruptibleOperation;
-(void)_requestNextThumbnail;
-(void)_reloadDataAndKeepSelection;
-(id)_imageForImportItem:(id)arg1 ;
-(void)_updateThumbnailDataForImportItem:(id)arg1 ;
-(void)_endUninterruptibleOperation;
-(void)_addEmptyAlbumViewWithError:(id)arg1 ;
-(void)_beginImportForItemAtIndex:(unsigned long long)arg1 ;
-(void)_deleteItems:(id)arg1 ;
-(void)_endImport;
-(id)_textBadgeStringForCameraItem:(id)arg1 ;
-(id)_thumbnailPathString;
-(void)importAll:(id)arg1 ;
-(void)importSelected:(id)arg1 ;
-(void)_importItems;
-(void)_importItemsAtIndexes:(id)arg1 ;
-(id)_localizedCameraName;
-(id)_loadingIndicatorView;
-(id)textBadgeStringForImageAtIndex:(long long)arg1 ;
-(PLCameraImporter *)importer;
-(BOOL)isImporting;
-(void)dealloc;
-(id)init;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setCustomTitleView:(UIView *)arg1 ;
-(UIView *)customTitleView;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_WI1*)arg1 ;
-(void)delete:(id)arg1 ;
-(void)updateUI;
-(void)_updateToolbar;
-(void)importerDidFinishReadingImportItems:(id)arg1 error:(id)arg2 ;
-(void)importer:(id)arg1 didAddImportItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)importer:(id)arg1 didChangeImportItem:(id)arg2 changeType:(int)arg3 error:(id)arg4 ;
-(void)importer:(id)arg1 didRemoveImportItems:(id)arg2 atIndexes:(id)arg3 ;
-(void)importer:(id)arg1 didCopyOriginalForItem:(id)arg2 error:(id)arg3 ;
-(void)importer:(id)arg1 didCompleteImportForItems:(id)arg2 ;
-(void)importer:(id)arg1 didImportItem:(id)arg2 error:(id)arg3 ;
-(void)importer:(id)arg1 didCompleteRemovalOfItems:(id)arg2 ;
-(NSString *)customTitle;
-(void)setCustomTitle:(NSString *)arg1 ;
-(BOOL)isBusy;
@end

