/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXConditionalResolverModifierInstructions.h>

@protocol SXConditionalResolverModifierInstructions <NSObject>
@property (nonatomic,readonly) BOOL shouldResolveAutoplacement; 
@property (nonatomic,readonly) BOOL shouldResolveComponents; 
@property (nonatomic,readonly) BOOL shouldResolveComponentLayouts; 
@property (nonatomic,readonly) BOOL shouldResolveComponentStyles; 
@property (nonatomic,readonly) BOOL shouldResolveComponentTextStyles; 
@property (nonatomic,readonly) BOOL shouldResolveDocumentStyle; 
@property (nonatomic,readonly) BOOL shouldResolveTextStyles; 
@required
-(BOOL)shouldResolveDocumentStyle;
-(BOOL)shouldResolveTextStyles;
-(BOOL)shouldResolveComponentTextStyles;
-(BOOL)shouldResolveComponents;
-(BOOL)shouldResolveComponentStyles;
-(BOOL)shouldResolveComponentLayouts;
-(BOOL)shouldResolveAutoplacement;

@end


@protocol SXDocumentProviding, SXHintsConfigurationOptionProvider;
@class NSString;

@interface SXConditionalResolverModifierInstructions : NSObject <SXConditionalResolverModifierInstructions> {

	id<SXDocumentProviding> _documentProvider;
	id<SXHintsConfigurationOptionProvider> _hintsConfigurationOptionProvider;

}

@property (nonatomic,readonly) id<SXDocumentProviding> documentProvider;                                             //@synthesize documentProvider=_documentProvider - In the implementation block
@property (nonatomic,readonly) id<SXHintsConfigurationOptionProvider> hintsConfigurationOptionProvider;              //@synthesize hintsConfigurationOptionProvider=_hintsConfigurationOptionProvider - In the implementation block
@property (nonatomic,readonly) BOOL shouldResolveAutoplacement; 
@property (nonatomic,readonly) BOOL shouldResolveComponents; 
@property (nonatomic,readonly) BOOL shouldResolveComponentLayouts; 
@property (nonatomic,readonly) BOOL shouldResolveComponentStyles; 
@property (nonatomic,readonly) BOOL shouldResolveComponentTextStyles; 
@property (nonatomic,readonly) BOOL shouldResolveDocumentStyle; 
@property (nonatomic,readonly) BOOL shouldResolveTextStyles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDocumentProviding>)documentProvider;
-(BOOL)shouldResolveDocumentStyle;
-(BOOL)shouldResolveTextStyles;
-(BOOL)shouldResolveComponentTextStyles;
-(BOOL)shouldResolveComponents;
-(id<SXHintsConfigurationOptionProvider>)hintsConfigurationOptionProvider;
-(id)hints;
-(id)initWithDocumentProvider:(id)arg1 hintsConfigurationOptionProvider:(id)arg2 ;
-(BOOL)shouldResolveComponentStyles;
-(BOOL)shouldResolveComponentLayouts;
-(BOOL)shouldResolveAutoplacement;
@end
