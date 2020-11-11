/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVDispatchOnce, AVAssetInspectorLoader, AVAssetInspector, NSDictionary, NSMutableArray;

@interface AVCompositionInternal : NSObject {

	OpaqueFigMutableCompositionRef mutableComposition;
	AVDispatchOnce* formatReaderInitializationOnce;
	AVDispatchOnce* assetInspectorInitializationOnce;
	AVDispatchOnce* tracksInitializationOnce;
	OpaqueFigFormatReaderRef formatReader;
	AVAssetInspectorLoader* assetInspectorLoader;
	AVAssetInspector* assetInspector;
	CGSize naturalSize;
	NSDictionary* URLAssetInitializationOptions;
	NSMutableArray* tracks;
	AVDispatchOnce* figAssetInitializationOnce;
	OpaqueFigAssetRef figAsset;

}
@end
