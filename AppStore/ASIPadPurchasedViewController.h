/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:45:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <AppStore/SKUIItemGridDelegate.h>
#import <AppStore/SKUIMenuViewControllerDelegate.h>
#import <AppStore/SKUIProductPageOverlayDelegate.h>
#import <AppStore/SKUIViewControllerTesting.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <AppStore/SKUIMessageBannerDelegate.h>
#import <AppStore/ASChildPurchasedViewController.h>

@protocol ASChildPurchasedViewControllerDelegate;
@class ASPurchasedPage, UIPopoverController, NSString, _UIContentUnavailableView, ASPurchasedHeaderView, SKUIItemGridViewController, SKUIProductPageOverlayController, SKUIMessageBanner, NSArray, SSFamilyMember;

@interface ASIPadPurchasedViewController : SKUIViewController <SKUIItemGridDelegate, SKUIMenuViewControllerDelegate, SKUIProductPageOverlayDelegate, SKUIViewControllerTesting, UIPopoverControllerDelegate, UISearchBarDelegate, SKUIMessageBannerDelegate, ASChildPurchasedViewController> {

	id<ASChildPurchasedViewControllerDelegate> _delegate;
	ASPurchasedPage* _page;
	UIPopoverController* _deviceTypeMenuPopover;
	UIPopoverController* _familyMemberMenuPopover;
	NSString* _familyMemberNoiTunesAccountActionURL;
	long long _familyAlertReason;
	_UIContentUnavailableView* _familyMemberNoiTunesAccountView;
	ASPurchasedHeaderView* _headerView;
	SKUIItemGridViewController* _itemGridViewController;
	_UIContentUnavailableView* _noPurchasedPageView;
	SKUIProductPageOverlayController* _overlayController;
	long long _overlaySourceItemIndex;
	SKUIMessageBanner* _banner;
	NSArray* _sortedFamilyMembers;
	SSFamilyMember* _activeFamilyMember;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ASChildPurchasedViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ASPurchasedPage * page;                                                  //@synthesize page=_page - In the implementation block
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)_setFamilyBarButtonItem;
-(id)_noPurchasedPageView;
-(id)_familyMemberNoiTunesAccountView;
-(id)_itemGridViewController;
-(id)_newMenuPopoverWithTitles:(id)arg1 images:(id)arg2 title:(id)arg3 checkedIndex:(long long)arg4 ;
-(void)_filterLocalAppsAction:(id)arg1 ;
-(void)_deviceTypeButtonAction:(id)arg1 ;
-(void)_familyMemberNoiTunesAccountAction;
-(void)_signInAction;
-(void)_familyButtonAction:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<ASChildPurchasedViewControllerDelegate>)arg1 ;
-(void)reloadData;
-(id<ASChildPurchasedViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(ASPurchasedPage *)page;
-(void)setPage:(ASPurchasedPage *)arg1 ;
-(id)_headerView;
-(id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2 ;
-(id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2 ;
-(void)productPageOverlayDidDismiss:(id)arg1 ;
-(id)_popSourceViewForOverlayController:(id)arg1 ;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)askPermissionBannerDidSelect:(id)arg1 ;
-(void)askPermissionBannerDidClear:(id)arg1 ;
-(void)itemGrid:(id)arg1 didPerformEditActionForItem:(id)arg2 atIndex:(long long)arg3 ;
-(void)itemGrid:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3 ;
-(void)itemGridWillBeginDragging:(id)arg1 ;
@end

