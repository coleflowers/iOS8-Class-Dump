/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:32:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class WorldClockCollectionView, WorldClockPageControl, WorldClockMapView, UIPageControl;

@interface WorldClockPadContentView : UIView {

	WorldClockCollectionView* _clocksView;
	WorldClockPageControl* _clocksPageIndicator;
	WorldClockMapView* _mapView;

}

@property (nonatomic,readonly) WorldClockCollectionView * clocksView;              //@synthesize clocksView=_clocksView - In the implementation block
@property (nonatomic,readonly) UIPageControl * clocksPageIndicator;                //@synthesize clocksPageIndicator=_clocksPageIndicator - In the implementation block
@property (nonatomic,readonly) WorldClockMapView * mapView;                        //@synthesize mapView=_mapView - In the implementation block
-(WorldClockCollectionView *)clocksView;
-(UIPageControl *)clocksPageIndicator;
-(void)scrollToCurrentPage;
-(WorldClockMapView *)mapView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

