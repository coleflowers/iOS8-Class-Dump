/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SearchInfo, MKMapView, SearchResult;

@interface SearchPinsManagerShowSearchResultsAnimation : NSObject {

	SearchInfo* _searchInfo;
	MKMapView* _mapView;
	BOOL _started;
	BOOL _canProceedToDropPins;
	BOOL _viewportAllowsDroppingPins;
	BOOL _hasDroppedPins;
	BOOL _cancelled;
	SearchResult* _searchResultToSelect;
	/*^block*/id _completion;

}
-(id)initWithSearchInfo:(id)arg1 mapView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)proceedWithDroppingPins:(BOOL)arg1 ;
-(void)_proceedWithDroppingPins;
-(void)cancel;
-(void)dealloc;
-(void)start;
@end

