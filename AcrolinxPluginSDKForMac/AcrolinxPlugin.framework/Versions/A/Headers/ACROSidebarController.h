//
//  AcrolinxSidebarController.h
//  AcrolinxPlugin
//
//  Created by Julian Weinert on 18.12.14.
//  Copyright (c) 2016 Acrolinx GmbH. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ACROWindow.h"
#import "ACROSidebarInterface.h"

@class WebView;

@protocol AcrolinxSidebarControllerDelegate;

@interface ACROSidebarController : NSWindowController <AcrolinxWindowHoverDelegate>

@property (strong) IBOutlet AcrolinxWindow *window;
@property (strong) IBOutlet WebView *webView;
@property (strong) IBOutlet NSButton *retryButton;
@property (strong) IBOutlet NSProgressIndicator *sidebarLoadingProgressIndicator;

@property (assign) id<AcrolinxSidebarControllerDelegate> delegate;
@property (assign) BOOL performGlobalCheckOnLoad;

@property (nonatomic, retain) ACROSidebarInterface *JSInterface;

- (void)loadURL:(NSURL *)URL;
- (void)loadStartPageURL:(NSURL *)URL;
- (BOOL)isWindowVisible;

@end

@protocol AcrolinxSidebarControllerDelegate <NSObject>
@optional
- (void)pluginSidebarController:(ACROSidebarController *)sidebarController mouseOver:(NSEvent *)theEvent;
- (void)pluginSidebarController:(ACROSidebarController *)sidebarController mouseOut:(NSEvent *)theEvent;

@end
