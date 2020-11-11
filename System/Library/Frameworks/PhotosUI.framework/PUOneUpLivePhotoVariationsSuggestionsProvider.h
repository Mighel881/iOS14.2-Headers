/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUOneUpSuggestionsProvider.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class NSMutableDictionary, NSString;

@interface PUOneUpLivePhotoVariationsSuggestionsProvider : PUOneUpSuggestionsProvider <PXChangeObserver> {

	NSMutableDictionary* _infos;

}

@property (nonatomic,readonly) NSMutableDictionary * infos;              //@synthesize infos=_infos - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleRenderStatusChangeForAsset:(id)arg1 info:(id)arg2 ;
-(NSMutableDictionary *)infos;
-(id)init;
-(long long)_recommendedVariationTypeForAsset:(id)arg1 ;
-(BOOL)canProvideSuggestionForAsset:(id)arg1 ;
-(id)requestSuggestionForAsset:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)_handleRenderCompletionForAsset:(id)arg1 withSuccess:(BOOL)arg2 result:(id)arg3 error:(id)arg4 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_handleRenderProgressChangeForInfo:(id)arg1 ;
-(void)_handleCancellationForAsset:(id)arg1 ;
@end
